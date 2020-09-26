//
// Created by fatima on 9/22/20.
//

#include "../Headers/Server.h"

void Server::activateServer(Graph* myGraph) {

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                   &opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );

    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address,
             sizeof(address))<0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    printf("bind\n");
    buffer[0]='a';
    if (listen(server_fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    printf("listen\n");
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
                             (socklen_t*)&addrlen))<0)
    {
        perror("accept");
        exit(EXIT_FAILURE);
    }
    while(buffer[0]!= 'e'){

        printf("accept\n");
        valread = read( new_socket , buffer, 1024);
        printf("%s\n",buffer );


        cout << buffer << endl;
        string messageReturn=get_Floyd_Warshall(myGraph);
        cout<<" no se sinceramente "<<endl;
        strcpy(hello, messageReturn.c_str());
        cout<<"ejfwejfwejfwefwe"<<endl;
        send(new_socket , hello , strlen(hello) , 0 );
        printf("Hello message sent\n");
    }


}
string Server::get_Floyd_Warshall(Graph* myGraph){

    auto *FW= new Floyd_Wharsall();
    FW->makeMatrix(myGraph->getSizeNodes());
    vector<vector<int>> matrix;
    matrix = FW->floyd_warshall(myGraph);

    string message;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) { //int(pow(10,9)
            if(matrix[i][j] != int(pow(10,9)) && matrix[i][j] != 0){

                //cout<< "Between node "<< i+1 << " and "<< j+1<< " the smallest distance is "<< matrix[i][j]<<endl;
                message+= "\n Entre " + to_string(i+1) + " y " + to_string(j+1) +
                " la distancia es " + to_string(matrix[i][j]);
            }
        }
    }
    cout << message << endl;

    return message;
}
