#pragma once
#include <string>
#include "ServiceTypes.h"

#ifndef SERVER_H
#define SERVER_H


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

	ServiceTypes serviceType;

	int data;

	int msgType;

public:

	Server();

	Server(ServiceTypes enumeration);

	Server(string name, int data);

	void setName(string name);

	string getName();

	void setData(int data);

	int getData();

	void setServerType(ServiceTypes sType);

	ServiceTypes getServerType();

	void getService();




};

#endif