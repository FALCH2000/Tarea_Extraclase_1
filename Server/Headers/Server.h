//
// Created by fatima on 9/22/20.
//

#ifndef TAREA_EXTRACLASE_1_SERVER_H
#define TAREA_EXTRACLASE_1_SERVER_H

#include <iostream>
#include "Graph.h"
#include "Floyd_Wharsall.h"

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
    char hello[1000]; /**< Is the char of the message that will be send to the client. */

    /**
     * Starts the server work. Make the bind of the porter, then the listen, then the accept and go on.
     * @param myGraph is the reference of the graph being worked on.
     */
    void activateServer(Graph* myGraph);
    /**
     * Call the algorithm Floyd_Warshall once the listening has been accepted on the server.
     * @param myGraph is the reference of the graph being worked on.
     * @return the string of the Floyd_Warshall algorithm result;
     */
    string get_Floyd_Warshall(Graph* myGraph);

};


#endif //TAREA_EXTRACLASE_1_SERVER_H
