#include <iostream>
#include "Headers/Node.h"
#include "Headers/Graph.h"

using namespace std;

int main() {
    Graph *myGraph= new Graph();
    for(int i=6; i >0; i--){
        myGraph->addNode();
    }
    myGraph->listNodes();

    //connecting nodes
    myGraph->connectNodes(3,2,4);
    myGraph->connectNodes(3,1,2);
    myGraph->connectNodes(3,6,2);
    myGraph->connectNodes(1,3,23);
    myGraph->connectNodes(1,2,8);
    myGraph->connectNodes(1,4,5);

    //getting information of the node 3
    Node* ptr= myGraph->getNode(3);
    ptr->getConnections();
    ptr->getEdges();

    //getting information of the node 1
    Node* ptr1= myGraph->getNode(1);
    ptr1->getConnections();
    ptr1->getEdges();



    return 0;

}
