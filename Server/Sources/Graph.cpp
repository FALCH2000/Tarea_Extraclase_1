//
// Created by fatima on 9/15/20.
//

#include "../Headers/Graph.h"

Graph::Graph(){
    _sizeNodes=0; //Initialize in zero.
}

Node* Graph::getNode(int id) {

    Node *returnNode= &NodesList[id-1]; //Asign the node in the position (id-1) in this variable.
    return returnNode;
}

void Graph::addNode(){
    _sizeNodes++;

    //creates a new Node with the id of the number of Nodes already
    Node *newNode= new Node(_sizeNodes); //newNode is a pointer to the new pointer i'm creating

    NodesList.push_back(*newNode); //insert the node into the list of nodes we have
}

void Graph::connectNodes(int origin, int destiny, int distance){
    Node* originPtr= getNode(origin);
    Node* destinyPtr= getNode(destiny);

    Edge* distancePtr= new Edge(originPtr, destinyPtr, distance);

    originPtr->connections.push_back(*destinyPtr);
    originPtr->edges.push_back(*distancePtr);


}
/**
 * This method print the Nodes in the list.
 *
 */
void Graph::listNodes() {
    cout<< "NodesList=   [ ";
    int i=0;
    Node* a;
    for(i;i < _sizeNodes-1; i++){
        a= &this->NodesList[i];
        cout<< a->id<< ", ";
    }
    a= &this->NodesList[i];
    cout<< a->id;

    cout<< " ]" << endl;
}
int Graph::getSizeNodes(){
    return _sizeNodes;
}

int Graph::getDistances(int origin, int destiny){
    Node* originPtr= getNode(origin);
    Node* destinyPtr= getNode(destiny);

    for(int i=0; i<originPtr->connections.size();i++){
        if(destinyPtr==originPtr->edges[i].destiny){
            return originPtr->edges[i].distance;
        }
    }
}

bool Graph::isEdge(int origin, int destiny){
    Node* originPtr= getNode(origin);
    Node* destinyPtr= getNode(destiny);

    for(int i=0;i< originPtr->connections.size();i++){
        if(destiny==originPtr->connections[i].id){
            return true;
        }
    }
    return false;
}