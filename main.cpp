#include <iostream>
#include "Headers/Node.h"
#include "Headers/Graph.h"

using namespace std;

int main() {
    Graph *myGraph= new Graph();
    for(int i=4; i >0; i--){
        myGraph->addNode();
    }
    myGraph->listNodes();
    myGraph->connectNodes(3,2,4);
    myGraph->connectNodes(3,1,2);
    myGraph->listNodes();

    for(int i=4; i >0; i--){
        myGraph->addNode();
    }
    myGraph->listNodes();

    Node* ptr= myGraph->getNode(3);
    ptr->getConnections();
    Node* ptr1= myGraph->getNode(1);
    ptr1->getConnections();



    return 0;

}
