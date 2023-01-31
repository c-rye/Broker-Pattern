#pragma once

#ifndef SERVER_H
#define SERVER_H
#include <string>

using namespace std;

// define message request or response
#define NO_MSG 0;
#define MSG_REQUEST 1;
#define MSG_RESPONSE 2;

// define what kind of info is being requested
#define INFO_NAME 11
#define INFO_DATA 12

class Server
{
private:
	string name;

	int data;

	int msgType;

public:

	Server();

	Server(string name, int data);

	void setName(string name);

	string getName();

	void setData(int data);

	int getData();




};

#endif