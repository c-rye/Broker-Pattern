#include "Client.h"
#include "Broker.h"
#include "Server.h"
#include "MsgParcel.h"



int main() {

	// initialize a single Broker to handle all message requests
	static Broker broker;

	// initialize a server object of type "Storage"
	Server server(Storage);

	// register the server object with the broker
	broker.registerObject(server);

	// create a message parcel to be sent to servers of type "Storage"
	MsgParcel parcel(Storage);

	// create a client to request the information from the server
	Client client;

	// client requests information from all servers of type "Storage" that have
	// been registered to the broker
	client.requestServerInfo(broker, parcel);

	
	return 0;
}