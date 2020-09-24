#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <iostream>

#define PORT 8080
using namespace std;

class Client
{
public:
    Client();
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    const char *hello = "Hello from client";
    char buffer[1024] = {0};
    int activateClient();
    void sendMessage(string message);
};

#endif // CLIENT_H
