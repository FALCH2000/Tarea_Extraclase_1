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
    if(this->connections.size()==0){
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
