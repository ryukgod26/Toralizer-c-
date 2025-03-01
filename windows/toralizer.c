#include "toralizer.h"

Req *request(const int Port,const char* Ip){
    Req *req;

    req = malloc(reqsize);
}

int main(int argc,char* argsv[])
{

int Port;
char* Ip;

if(argc < 3){

fprintf(stderr,"Usage : %s <host> <port>",argsv[0]);

}


Ip = argsv[1];
Port = atoi(argsv[2]);

int s =socket(AF_INET,SOCK_STREAM,0);

if (s<0){
perror("socket error");
return -1;

}


struct sockaddr_in sock;




sock.sin_family = AF_INET;
sock.sin_port = htons(PROXYPORT);
sock.sin_addr.s_addr = inet_addr(PROXY);

if (connect(s,(struct sockaddr *)&sock,sizeof(sock))){

perror("connection error");

return -1;
}

printf("Connection Succesful.");
closesocket(s);

return 0;
}

