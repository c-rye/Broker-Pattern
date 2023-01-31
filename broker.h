#pragma
#include <string>
#include "Server.h"

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

public:

	Broker();

	void forwardRequest(int msgType, string name, int data);

	void forwardResponse(int msgType);

	void registerObject(ServerTypes st, Server s);


};