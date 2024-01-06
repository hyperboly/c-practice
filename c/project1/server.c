/*
 * Project 1: Create a simple TCP client/server
 * Server
*/

#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
// #include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 61111

int main(void) {
    // socketDesc is file descriptor
    // clientSock is client file descriptor
    int socketDesc, clientSock, clientSize;
    // built in sockaddr_in function from <sys/socket.h>
    struct sockaddr_in server_addr, client_addr;

    char serverMessage[2000], clientMessage[2000];

    return 0;
}
