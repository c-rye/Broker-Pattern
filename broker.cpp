#include <iostream>
#include "Broker.h"
#include "ServiceTypes.h"




using namespace std;


Broker::Broker()
{
}

void Broker::handleRequest(MsgParcel mp)
{

	ServiceTypes service = mp.getServerType();

	Server server = regObjs[service];

	switch (service) {
	case Storage:
		cout << "Received service request: Storage";
		server.getService();
	}
}

void Broker::forwardResponse(MsgParcel mp)
{
}



void Broker::registerObject(Server s)
{
	ServiceTypes st = s.getServerType();

	regObjs[st] = s;

}
