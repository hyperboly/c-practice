/*
* Web server in C
*/

#include <stdio.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/sendfile.h>
#include <string.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    int serverDesc = socket(AF_INET, SOCK_STREAM, 0);

    const int trueFlag = 1;
    setsockopt(serverDesc, SOL_SOCKET, SO_REUSEADDR, &trueFlag, sizeof(int));

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(20000);
    addr.sin_addr.s_addr = INADDR_ANY;

    int bindStat = bind(serverDesc, (struct sockaddr*) &addr, sizeof(addr));

    if(bindStat < 0) {
        printf("Bind error! Error number: %d\n", errno);
        return -1;
    }

    if(listen(serverDesc, 128) < 0) {
        printf("Error listening to socket. Errno: %d", errno);
        return -1;
    }

    int clientDesc = accept(serverDesc, NULL, NULL);

    if(clientDesc < 0) {
        printf("Error accepting socket. Errno: %d", errno);
        return -1;
    }

    char serverBuffer[256] = {0};
    if(recv(clientDesc, serverBuffer, 256, 0) < 0) {
        printf("Error receiving data from client. Errno: %d", errno);
        return -1;
    }

    // recv GET /index.html
    
    char* request = serverBuffer + 5;
    *strchr(request , ' ') = 0;

    int opened_fd = open(request, O_RDONLY);
    sendfile(clientDesc, opened_fd, 0, 256);
    close(opened_fd);
    close(clientDesc);
    close(serverDesc);

    return 0;
}
