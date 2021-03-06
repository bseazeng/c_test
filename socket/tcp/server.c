#include "server.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define SERVER_PORT 50001
#define BUF_SIZE 1024

int main()
{	
	struct sockaddr_in server_addr;
	struct sockaddr_in clientAddr;
	int     addr_len          = sizeof(clientAddr);
	int     client            = 0;	
	int     serverSocket     = 0;
	
	pid_t   child_pid         = 0;

	if((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("socket failed");
		return 1;
	}

	bzero(&server_addr, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(SERVER_PORT);
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	if(bind(serverSocket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0)
	{
		perror("connect");
		return 1;
	}

	if(listen(serverSocket, 5) < 0) 
	{
		perror("listen");
		return 1;
	}

	while(1)
	{
		printf("Listening on port: %d\n", SERVER_PORT);
		client = accept(serverSocket, (struct sockaddr*)&clientAddr, (socklen_t*)&addr_len);
		if(client < 0)
		{
			perror("accept");
			continue;
		}
		if( -1 ==(child_pid = fork()))
		{
			printf("fork error\n");
			continue;
		}
		printf("\nrecv client data...n");
		printf("IP: %s\n", inet_ntoa(clientAddr.sin_addr));
		printf("Port:%d\n", htons(clientAddr.sin_port));
		if(0 == child_pid )
		{	
			close(serverSocket);
			while(1)
			{
				char    buffer[BUF_SIZE]  = {0};
				char    sendbuf[BUF_SIZE] = {0};
				int     iDataNum          =0 ;
				memset(buffer,0,1024);
				memset(sendbuf,0,1024);
				iDataNum = recv(client, buffer, 1024, 0);
				if(iDataNum < 0)
				{
					perror("recv");
					continue;
				}
				buffer[iDataNum] = '\0';
				if(strcmp(buffer, "quit") == 0)
					break;
				printf("[%d]recv data:\n %s\n", iDataNum, buffer);
				memcpy(sendbuf,"server send:",sizeof("server send"));
				strcat(sendbuf,buffer);
				send(client, sendbuf, iDataNum, 0);
			}
			exit(0);
		}
		
	}
  return 0;
}

