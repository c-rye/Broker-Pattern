#include <iostream>
#include "Broker.h"
#include "ServiceTypes.h"

using namespace std;

Broker::Broker()
{
}


// central function for handling requests to the servers
void Broker::handleRequest(MsgParcel mp)
{
	cout << "\nBroker: handling request...";
	ServiceTypes service = mp.getServerType();

	Server server = regObjs[service];

	switch (service) {
	case Storage:
		cout << "\nBroker: received service request type 'Storage'";
		server.getService();
	}
}

void Broker::forwardResponse(MsgParcel mp)
{
}


// registers a server with the broker, allowing the broker to access the server
// and forward messages to it
void Broker::registerObject(Server s)
{
	ServiceTypes st = s.getServerType();

	cout << "\nBroker: registering server of type " << st << " to broker";

	regObjs[st] = s;

}
