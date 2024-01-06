#include <arpa/inet.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

int main(void) {
    // descriptor for the client socket
    int socketDesc = socket(AF_INET, SOCK_STREAM, 0);

    if(socketDesc < 0){
        printf("Bad socket creation\n");
        return -1;
    }

    //sockaddr_in, predefined structure for defining IPv4 sockets
    struct sockaddr_in serverAddress;
    // family, AF_INET is IPv4, AF_INET6 is IPv6, AF_UNIX is for unix socks
    serverAddress.sin_family = AF_INET;
    // define the port, see man htons. basically converts to network bytes
    // because server_address.sin_port only takes binary
    serverAddress.sin_port = htons(61111);
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

    return 0;
}
