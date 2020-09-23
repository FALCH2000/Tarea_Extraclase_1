//
// Created by fatima on 9/15/20.
//

#ifndef TAREA_EXTRACLASE_1_NODE_H
#define TAREA_EXTRACLASE_1_NODE_H

#include <vector>
#include <iostream>
#include "Edge.h"

using namespace std;

class Edge;

class Node {

public:
    int id;//this is the identification of each node that we create
    vector<Node> connections; // this saves all the connection that has a node when we create an edge
    vector<Edge> edges; //this saves the edges that has a node
    Node(int id);
    void getConnections();
    void getEdges();
};


#endif //TAREA_EXTRACLASE_1_NODE_H
