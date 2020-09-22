//
// Created by fatima on 9/15/20.
//

#ifndef TAREA_EXTRACLASE_1_GRAPH_H
#define TAREA_EXTRACLASE_1_GRAPH_H

#include <vector>
#include "Node.h"
#include "Edge.h"
#include <iostream>

using namespace std;

class Node;
/**
 * Class of the graph to create.
 *
 */
class Graph {

    int _sizeNodes;
    vector<Node> NodesList;

public:
    Graph();
    Node* getNode(int id);
    void addNode();
    void connectNodes(int origin, int destiny, int distance);
    void listNodes();
};


#endif //TAREA_EXTRACLASE_1_GRAPH_H
