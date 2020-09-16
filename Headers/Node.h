//
// Created by fatima on 9/15/20.
//

#ifndef TAREA_EXTRACLASE_1_NODE_H
#define TAREA_EXTRACLASE_1_NODE_H

#include <vector>

using namespace std;

class Node {

public:
    int id=0; //this is the identification of each node that we create
    vector<int> connections; // this saves all the connection that has a node when we create an edge

private:vector<int> Nodes;

public:
    Node(int id);

    int getNode(int id);
};


#endif //TAREA_EXTRACLASE_1_NODE_H
