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
    vector<vector<int>> makeMatrix(int nodes);

    vector<vector<int>> floyd_warshall(Graph* myGraph);
};


#endif //TAREA_EXTRACLASE_1_FLOYD_WHARSALL_H
