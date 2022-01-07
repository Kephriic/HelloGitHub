#pragma once
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include<stdbool.h>

bool initSocket();

bool closeSocket();

void listenToClient();

bool processMsg();