//
// Created by fatima on 9/22/20.
//

#include "../Headers/Floyd_Wharsall.h"


/**
 * Creates a matrix with very large values. This values comes by default.
 * @param nodes
 * @return
 */
vector<vector<int>> Floyd_Wharsall::makeMatrix(int nodes) {
    vector<vector<int>> matrix;
    for (int i = 0; i < nodes; i++) {
        vector<int> temp;
        for (int j = 0; j < nodes; j++) {
            temp.push_back(int(pow(10, 9)));
        }
        matrix.push_back(temp);
    }
    return matrix;
}


vector<vector<int>> Floyd_Wharsall::floyd_warshall(Graph* myGraph) {
    int nodes= myGraph->getSizeNodes();

    auto matrix= makeMatrix(nodes);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {

            if (i == j) {
                matrix[i][j] = 0;
            } else if (myGraph->isEdge(i+1, j+1)) {
                matrix[i][j] = myGraph->getDistances(i+1, j+1);
            }

        }
    }
    for (int k = 0; k < matrix.size(); k++) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if (matrix[i][j] > matrix[i][k] + matrix[k][j]) {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }


    return matrix;

}




