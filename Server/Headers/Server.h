//
// Created by fatima on 9/22/20.
//

#ifndef TAREA_EXTRACLASE_1_SERVER_H
#define TAREA_EXTRACLASE_1_SERVER_H

#include <iostream>
// Server side C/C++ program to demonstrate Socket programming
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#define PORT 8080
using namespace std;

class Server {
public:
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char *hello = "Hello from server";

    void activateServer();

};


#endif //TAREA_EXTRACLASE_1_SERVER_H
