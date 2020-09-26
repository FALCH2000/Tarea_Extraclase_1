//
// Created by fatima on 9/22/20.
//

#ifndef TAREA_EXTRACLASE_1_FLOYD_WHARSALL_H
#define TAREA_EXTRACLASE_1_FLOYD_WHARSALL_H
#include "Graph.h"
#include "Edge.h"
#include "Node.h"
#include <vector>
#include <math.h>

class Floyd_Wharsall {


public:
    /**
     * Makes the matrix to go through and initializes the fields in infinity.
     * @param nodes the number of nodes of the graph.
     * @return the matrix made it.
     */
    vector<vector<int>> makeMatrix(int nodes);
    /**
     *Make all the algorithm. Assign the value of all the fields as it supposed to be and return the new matrix.
     * @param myGraph the graph being worked on.
     * @return the matrix with the new fields changed.
     */
    vector<vector<int>> floyd_warshall(Graph* myGraph);
};


#endif //TAREA_EXTRACLASE_1_FLOYD_WHARSALL_H
