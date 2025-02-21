#include<stdio.h>
#include<unistd.h>
#include<strings.h>
// #include<winsock.h>
#include<winsock2.h>
#include<sys/types.h>
// #include<sys/socket.h>
// #include<netinet/in.h>
// #include<arpa/inet.h>
#include<stdlib.h>

#define PROXY "127.0.0.1"
#define PROXYPORT 9050
#define reqsize sizeof(struct proxy_request)
#define ressize sizeof(struct proxy_response)

typedef unsigned int int32;
typedef unsigned long int int64;
typedef unsigned short int int16;
typedef unsigned char int8;


struct proxy_request{

int8 vn; //version number
int8 cd; // command code
int16 dstPort; // destination port
int32 dstIP; // destination IP
unsigned char userid[8];

};

typedef struct proxy_request Req;

struct proxy_response{

int8 vn; // version Numeber
int8 cd;// Result code
int16 dstPort; // destination port
int32 dstIP; // destination IP

};


typedef struct proxy_response Res;

Req *request(const int , const char*);
int main(int,char**);