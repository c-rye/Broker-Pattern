#pragma

#ifndef BROKER_H
#define BROKER_H

#include <string>
#include <map>
#include "Server.h"
#include "MsgParcel.h"

using namespace std;

// define message request or response
#define NO_MSG 0;
#define MSG_REQUEST 1;
#define MSG_RESPONSE 2;

// define what kind of info is being requested
#define INFO_NAME 11
#define INFO_DATA 12

class Broker
{
private:
	map<ServiceTypes, Server> regObjs;
public:

	Broker();

	void handleRequest(MsgParcel mp);

	void forwardResponse(MsgParcel mp);

	void registerObject(Server s);

};

#endif