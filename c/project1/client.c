/*
* Project 1
* Client
*/

#include <arpa/inet.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>

#define PORT 61111

int main(void) {
    // descriptor for the client socket
    int socketDesc = socket(AF_INET, SOCK_STREAM, 0);
    char clientMsg[256];

    if(socketDesc < 0) {
        printf("Bad socket creation\n");
        return -1;
    }

    //sockaddr_in, predefined structure for defining IPv4 sockets
    struct sockaddr_in serverAddress;
    // family, AF_INET is IPv4, AF_INET6 is IPv6, AF_UNIX is for unix socks
    serverAddress.sin_family = AF_INET;
    // define the port, see man htons. basically converts to network bytes
    // because server_address.sin_port only takes binary
    serverAddress.sin_port = htons(PORT);
    // sin_addr is a struct, so defines s_addr inside sin_addr
    // INADDR_ANY is 0.0.0.0
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // connect() to the server socket
    // socketDesc from clientsock
    // sockaddr * is a pointer to a socketaddr that casts it to server_address
    int connectionStatus = connect(socketDesc, (struct sockaddr *) &serverAddress, sizeof(serverAddress));

    // Error handling if connecting goes bad
    if(connectionStatus < 0) {
        printf("Connection status bad, error number: %d\n", errno);
        return -1;
    }

    printf("> ");
    fgets(clientMsg, 256, stdin);

    if(send(socketDesc, &clientMsg, sizeof(clientMsg), 0) < 0) {
        printf("Client send failed, errno: %d\n", errno);
        return -1;
    }

    // receive data from server
    // serverResponse is the response and how large it can be (256)
    char serverResponse[256];
    if(recv(socketDesc, &serverResponse, sizeof(serverResponse), 0) < 0) {
        printf("Error receiving message from server. Errno: %d", errno);
        return -1;
    }

    // print data from server
    printf("Here's what the server said: %s\n", serverResponse);

    // close the connection
    close(socketDesc);

    return 0;
}
