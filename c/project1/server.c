/*
 * Project 1: Create a simple TCP client/server
 * Server
*/

#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define PORT 61111

int main(void) {
    char serverMessage[256] = "This is the server speaking.";

    // socketDesc is file descriptor
    // AF_INET is IPv4
    // SOCK_STREAM specifies TCP
    int socketDesc = socket(AF_INET, SOCK_STREAM, 0);
    // built in sockaddr_in function from <sys/socket.h>
    struct sockaddr_in serverAddress;

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(PORT);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // bind socket file descriptor to port
    bind(socketDesc, (struct sockaddr*) &serverAddress, sizeof(serverAddress));

    // listen on port
    listen(socketDesc, 128);

    // client socket file descriptor, read `man accept`
    int clientSocket = accept(socketDesc, NULL, NULL);

    // send client data
    send(clientSocket, serverMessage, sizeof(serverMessage), 0);

    close(socketDesc);

    return 0;
}
