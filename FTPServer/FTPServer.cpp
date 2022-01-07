#include<stdio.h>
#include"FTPServer.h"

using namespace std;

int main()
{
	initSocket();


	closeSocket();
	return 0;
}

bool initSocket()
{
	WSADATA wsadata;
	if (0 != WSAStartup(MAKEWORD(2, 2), &wsadata))
	{
		printf("WSAStartup failed:%d\n", WSAGetLastError());
		return false;
	}
	return true;
}

bool closeSocket()
{

}

void listenToClient()
{

}

bool processMsg()
{

}