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

    cout << "AQUI ESTA 1" << endl;

    this->shortestRoot(); //calls the method to find the shortest road between origin node and destiny node
}

void Floyd_Wharsall::shortestRoot(){

    //fills the Distances and Routes matrices
    this->fillMatrices();

    //go through all nodes
    for(int i=0; i<myGraphPtr->getSizeNodes();i++){

        //go through the column of a node
        for(int j=0; j<myGraphPtr->getSizeNodes();j++){

            //go through the row of a node
            for(int k=0; k< myGraphPtr->getSizeNodes();k++){
                //reviews that the sume of both distances is
                if(((Distances[j][i]+Distances[i][k]) < Distances[j][k]) && !(j==k)){

                    Distances[j][k]= Distances[j][i];
                    Routes[j][k]=myGraphPtr->getNode(i);
                }
            }
        }
    }

}

void Floyd_Wharsall::fillMatrices() {

    /**
    //this loop go through the columns.
    for(int i=0; i< myGraphPtr->getSizeNodes();i++){
        cout << "AQUI ESTA 2" << endl;
        //this loop go through the rows.
        for(int j=0; j<myGraphPtr->getSizeNodes();j++){
            cout << "AQUI ESTA 3" << endl;
            //this is the diagonal of the matrix and have to be null or 0
            if(i==j){
                cout << "AQUI ESTA  en un if" << Distances[0][0] << endl;
                Distances[i][j]= 0;
                Routes[i][j]= nullptr;
            }else{
                cout << "AQUI ESTA nidea" << endl;
                //this pointer gets the node of the row i'm analyzing
                Node* connectionNodePtr=myGraphPtr->getNode(i); //i position
                //this pointer gets the node of the column that change
                Node* reviewNodePtr= myGraphPtr->getNode(j); //

                //this variable review if there's a connection between the node of the row and the node of the column
                int distance= myGraphPtr->getDistances( connectionNodePtr->id, reviewNodePtr->id);
                int infinite= 9999999; //

                //there's no connection between the nodes
                if( distance==0){
                    Distances[i][j]= infinite; //assigns infinite because it doesn't exist
                }
                else {
                    Distances[i][j]= distance; //assigns distance because there's a connection
                }

                //Assigns the initial order of Routes matrix
                Routes[i][j]=myGraphPtr->getNode(j);

            }
        }
        cout << "AQUI ESTA al final del loop" << endl;
    }
    */
}
