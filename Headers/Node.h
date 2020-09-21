//
// Created by fatima on 9/15/20.
//

#ifndef TAREA_EXTRACLASE_1_NODE_H
#define TAREA_EXTRACLASE_1_NODE_H

#include <vector>
#include <iostream>

using namespace std;

using namespace std;

class Node {

public:
    int id;//this is the identification of each node that we create
    vector<Node> connections; // this saves all the connection that has a node when we create an edge
    Node(int id);
    void getConnections();
};


#endif //TAREA_EXTRACLASE_1_NODE_H
