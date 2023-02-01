#include "Client.h"
#include "Broker.h"
#include "Server.h"
#include "MsgParcel.h"



int main() {

	static Broker broker;

	Server server(Storage);

	broker.registerObject(server);

	MsgParcel parcel(Storage);

	Client client;

	client.requestServerInfo(broker, parcel);

	
	return 0;
}