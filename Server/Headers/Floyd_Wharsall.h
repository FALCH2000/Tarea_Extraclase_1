//
// Created by fatima on 9/22/20.
//

#ifndef TAREA_EXTRACLASE_1_FLOYD_WHARSALL_H
#define TAREA_EXTRACLASE_1_FLOYD_WHARSALL_H
#include "Graph.h"
#include "Edge.h"
#include "Node.h"
#include <vector>

class Floyd_Wharsall {

    Graph* myGraphPtr;
    Node* originPtr;
    Node* destinyPtr;
public:
    Floyd_Wharsall(int origin, int destiny, Graph* myGraph);

private:
    void shortestRoot();
};


#endif //TAREA_EXTRACLASE_1_FLOYD_WHARSALL_H
