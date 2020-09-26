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
 */
class Graph {

    int _sizeNodes; /**< Is the counter of the number of nodes created in the graph. */
    vector<Node> NodesList; /**< Saves all the nodes created. */

public:
    Graph(); /**< Constructor of the class. */
    /**
     * Gets the reference of a node.
     * @param id is the id of the node to get.
     * @return the reference of the node with the id provided.
     */
    Node* getNode(int id);
    void addNode(); /**< add a new node to the graph */
    /**
     * Create an edge between two nodes.
     * @param origin the node where the edge exit.
     * @param destiny the node where arrives the edge.
     * @param distance the distance of the edge.
     */
    void connectNodes(int origin, int destiny, int distance);
    void listNodes(); /**< Prints on console the list of nodes created. */
    int getSizeNodes(); /**< Returns the number of nodes created. */
    /**
     * Give the distance of an edge.
     * @param origin the id of the node where the edge exit.
     * @param destiny the id of the node where the edge arrives.
     * @return the distance.
     */
    int getDistances(int origin, int destiny);
    /**
     * Indicates if the nodes are connected.
     * @param origin the exit node.
     * @param destiny the arrival node.
     * @return a boolean, true if they're connected or false if don't.
     */
    bool isEdge(int origin, int destiny);
};


#endif //TAREA_EXTRACLASE_1_GRAPH_H
