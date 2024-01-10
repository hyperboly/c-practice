/*
 * Project 1: Create a simple TCP client/server
 * Server
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#define PORT 61111

int main(void) {
    const int trueFlag = 1;
    char serverMessage[256] = "Hello!";

    // socketDesc is file descriptor
    // AF_INET is IPv4
    // SOCK_STREAM specifies TCP
    int socketDesc = socket(AF_INET, SOCK_STREAM, 0);

    // set socket options
    // SOL_SOCKET sets the options at the socket level
    // SO_REUSEADDR avoids bind errors, if socket not closed, will reuse the socket.
    setsockopt(socketDesc, SOL_SOCKET, SO_REUSEADDR, &trueFlag, sizeof(int));

    // built in sockaddr_in function from <sys/socket.h>
    struct sockaddr_in serverAddress;

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(PORT);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // bind socket file descriptor to port
    int bindStatus = bind(socketDesc, (struct sockaddr*) &serverAddress, sizeof(serverAddress));

    if(bindStatus < 0) {
        printf("Bind error! Error number: %d\n", errno);
        return -1;
    }

    // listen on port
    if(listen(socketDesc, 128) < 0) {
        printf("Error listening to socket. Errno: %d", errno);
        return -1;
    }

    printf("Listening to socket %d\n", socketDesc);

    // client socket file descriptor, read `man accept`
    int clientSocket = accept(socketDesc, NULL, NULL);

    char clientMsg[256];

    if(recv(clientSocket, &clientMsg, sizeof(clientMsg), 0) < 0) {
        printf("Receive from client failed, errno: %d", errno);
        return -1;
    }

    printf("What the client said: %s", clientMsg);

    // send client data
    if(send(clientSocket, serverMessage, sizeof(serverMessage), 0) < 0) {
        printf("Error sending client message. Errno: %d", errno);
        return -1;
    }

    close(socketDesc);

    return 0;
}
