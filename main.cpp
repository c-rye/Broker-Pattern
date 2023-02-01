#include "Client.h"
#include "Broker.h"
#include "Server.h"
#include "MsgParcel.h"



int main() {

	static Broker broker;
	Server server;

	broker.registerObject(Storage, server);

	MsgParcel parcel(Storage);
	Client client;

	

}