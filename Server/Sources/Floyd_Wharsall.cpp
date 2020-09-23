//
// Created by fatima on 9/22/20.
//

#include "../Headers/Floyd_Wharsall.h"

/**
 *
 * @param origin will be the origin node that I want to know the shortest way.
 * @param destiny will be the destiny node that I want to know the shortest way.
 * @param myGraph it's obtained to know where the nodes are from.
 * @brief is the constructor. It's to assign the parameters to an own variables. It also
 * call other functions to do all the algorithm and get the results.
 */
Floyd_Wharsall::Floyd_Wharsall(int origin, int destiny, Graph *myGraph) {
    this->myGraphPtr= myGraph;
    this->originPtr= myGraphPtr->getNode(origin);
    this->destinyPtr= myGraphPtr->getNode(destiny);

    this->shortestRoot();
}

void Floyd_Wharsall::shortestRoot(){
    vector<vector<Node>> path;

}