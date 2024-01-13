// Client side implementation of UDP client-server model
#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include "UdpClnt.h"

#define MAXLINE 1025
   
// Driver code
int udpClnt(int port, const char *buf) {
    int sockfd;
    char buffer[MAXLINE];
    struct sockaddr_in     servaddr;
   
    std::cout<<"CLIENT"<<std::endl;
    // Creating socket file descriptor
    if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }
   
    memset(&servaddr, 0, sizeof(servaddr));
       
    // Filling server information
    std::cout<<"Filling server information:"<<port<<AF_INET<<INADDR_BROADCAST<<std::endl;
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(port);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
       
    int n;
    socklen_t len;
       
    sendto(sockfd, (const char *)buf, strlen(buf),
        MSG_CONFIRM, (const struct sockaddr *) &servaddr, 
            sizeof(servaddr));
    std::cout<<"Hello message sent."<<std::endl;
    std::cout<<"by port Number:"<<port<<std::endl;
           
    n = recvfrom(sockfd, (char *)buffer, MAXLINE, 
                MSG_WAITALL, (struct sockaddr *) &servaddr,
                &len);
    buffer[n] = '\0';
    std::cout<<"Server :"<<buffer<<std::endl;
   
    close(sockfd);
   
    return 0;
}

