//
// Created by fatima on 9/15/20.
//

#ifndef TAREA_EXTRACLASE_1_EDGE_H
#define TAREA_EXTRACLASE_1_EDGE_H
#include "Node.h"
#include "Graph.h"
#include <vector>

class Node;
/**
 * This class provide the edge to connect two nodes and all the methods to it's management.
 * This edge is directed so it has origin and destination.
 */
class Edge {
public:
    int distance; /**< The distance(or weight) between two nodes connected */
    Node *origin; /**< The origin of the connection */
    Node *destiny; /**< The destiny of the connection */
    /**
     * It's the constructor.
     * @param origin is the exit point of the edge.
     * @param destiny is the edge arrival point.
     * @param distance is the distance or weight between the nodes.
     */
    Edge(Node* origin, Node* destiny, int distance);
    void getEdges(); /**< Prints on console all the edges that has a node. */
};


#endif //TAREA_EXTRACLASE_1_EDGE_H
