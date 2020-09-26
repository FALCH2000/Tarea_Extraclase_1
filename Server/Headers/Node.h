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
/**
 * This class provide Nodes for the Graph and the necessary methods for it's management.
 */
class Node {

public:
    int id; /**< Identification of each node that we create */
    vector<Node> connections; /**< Saves all the connection that has a node when an edge is created */
    vector<Edge> edges; /**< Saves the edges that has a node */
    /**
     * Constructor of the class.
     * @param id is the id of the node. Corresponds to the number of the node that is created.
     */
    Node(int id);

    void getConnections(); /**< Prints on console all the nodes to which the node is connected. */
    void getEdges(); /**< Prints on console all the edges of the node. */
};


#endif //TAREA_EXTRACLASE_1_NODE_H
