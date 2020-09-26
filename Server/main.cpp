#include <iostream>
#include "Headers/Node.h"
#include "Headers/Graph.h"
#include "Headers/Floyd_Wharsall.h"
#include "Headers/Server.h"

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





    Server* myServer= new Server;
    myServer->activateServer(myGraph);


    return 0;

}
