#include "Client.h"


using namespace std;

Client::Client()
{
	msgType = NO_MSG;

	name = "";

	data = 0;
}

Client::Client(string n, int d)
{
	msgType = NO_MSG;

	name = n;

	data = d;

}

void Client::setMsgParcel(MsgParcel mp)
{
	parcel = mp;
}

MsgParcel Client::getMsgParcel()
{
	return parcel;
}


void Client::setClientMsgType(int msgT)
{
	msgType = msgT;
}

int Client::getClientMsgType()
{
	return msgType;
}

void Client::setClientName(string n)
{
	name = n;
}

string Client::getClientName()
{
	return name;
}

void Client::setClientData(int d)
{
	data = d;
}

int Client::getClientData()
{
	return data;
}

void Client::requestServerInfo()
{
	msgType = MSG_REQUEST;
}
