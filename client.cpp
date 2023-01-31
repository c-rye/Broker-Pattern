#include "client.h"


using namespace std;

client::client()
{
	msgType = NO_MSG;

	name = "";

	data = 0;
}

client::client(string n, int d)
{
	msgType = NO_MSG;

	name = n;

	data = d;

}

void client::setClientMsgType(int msgT)
{
	msgType = msgT;
}

int client::getClientMsgType()
{
	return msgType;
}

void client::setClientName(string n)
{
	name = n;
}

string client::getClientName()
{
	return name;
}

void client::setClientData(int d)
{
	data = d;
}

int client::getClientData()
{
	return data;
}

void client::requestServerInfo()
{
	msgType = MSG_REQUEST;
}
