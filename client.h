#pragma once
#include <string>
#include "ServerTypes.h"
#include "MsgParcel.h"

using namespace std;

// define message request or response
#define NO_MSG 0
#define MSG_REQUEST 1
#define MSG_RESPONSE 2

// define what kind of info is being requested
#define INFO_NAME 11
#define INFO_DATA 12

class Client
{



private:
	int msgType;

	string name;

	int data;

	MsgParcel parcel;

public:
	Client();

	Client(string name, int data);

	void setMsgParcel(MsgParcel mp);

	MsgParcel getMsgParcel();

	void setClientMsgType(int msgType);

	int getClientMsgType();

	void setClientName(string name);

	string getClientName();

	void setClientData(int data);

	int getClientData();

	void requestServerInfo();

};

