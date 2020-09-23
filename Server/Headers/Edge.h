//
// Created by fatima on 9/15/20.
//

#ifndef TAREA_EXTRACLASE_1_EDGE_H
#define TAREA_EXTRACLASE_1_EDGE_H
#include "Node.h"
#include "Graph.h"
#include <vector>

class Node;

class Edge {
public:
    int distance;//this is the distance between two nodes connected
    Node *origin; //the origin of the connection
    Node *destiny; // the destiny of the connection
    Edge(Node* origin, Node* destiny, int distance);
    void getEdges();
};


#endif //TAREA_EXTRACLASE_1_EDGE_H
