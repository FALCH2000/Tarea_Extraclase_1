#include "client.h"

Client::Client()
{

}

int Client::activateClient(){
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        {
            printf("\n Socket creation error \n");
            return -1;
        }

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(PORT);

        // Convert IPv4 and IPv6 addresses from text to binary form
        if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)
        {
            printf("\nInvalid address/ Address not supported \n");
            return -1;
        }

        if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
        {
            printf("\nConnection Failed \n");
            return -1;
        }



        return 0;
}

string Client::sendMessage(string message){
    hello= message.c_str();
    cout<<"yeas"<<endl;
    send(sock , hello , strlen(hello) , 0 );
    cout <<"tis"<<endl;
    printf("Hello message sent\n");
    valread = read( sock , buffer, 1024);
    printf("%s\n",buffer );
    string returnMessage= buffer;
    return returnMessage;
}

