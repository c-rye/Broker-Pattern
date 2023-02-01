#include "Client.h"
#include "Broker.h"
#include "Server.h"
#include "MsgParcel.h"



int main() {

	static Broker broker;
	Server server;
	MsgParcel parcel(Storage);
	Client client;

	broker.registerObject(Storage, server);

}