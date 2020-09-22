//
// Created by fatima on 9/15/20.
//

#include "../Headers/Node.h"

Node::Node(int id) {
    this->id=id;
}
void Node::getConnections(){
    Node* ptr=0;
    int i=0;
    if(this->connections.empty()){
        cout << "The node "<< this->id<<" has no connections yet"<<endl;
    }else{
        cout << "Connection of the node "<< this->id<<" are: " << "[ ";
        for(i; i< this->connections.size()-1; i++){
            ptr= &connections[i];
            cout << ptr->id<< ", ";
        }
        ptr= &connections[i];
        cout << ptr->id;
        cout << " ]"<<endl;
    }

}
/**
 * This method returns all the edges of node
 */
void Node::getEdges() {
    if(this->edges.empty()){

        cout<<"The node "<< this->id<<" has no edges to another node yet" <<endl;
    }else{


        Edge* myEdge;

        cout << "Edges list is:   [";
        int i=0;

        for(i;i<this->edges.size()-1;i++){
            myEdge= &this->edges[i];

            cout << "from "<<myEdge->origin->id<<" to "<<myEdge->destiny->id<< " with distance "<< myEdge->distance<< ", ";
        }
        myEdge= &this->edges[i];
        cout << "from "<<myEdge->origin->id<<" to "<<myEdge->destiny->id<< " with distance "<< myEdge->distance<<" ]"<<endl;
    }

}
