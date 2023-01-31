#include "Broker.h"
#include "ServerTypes.h"




using namespace std;


Broker::Broker()
{
}

void Broker::forwardRequest(MsgParcel mp, ServerTypes st)
{
	Server server = regObjs[st];

	switch (st) {
	case Storage:
		server.printMsg("Switch case 'Storage'");
	}
}

void Broker::forwardResponse(MsgParcel mp)
{
}



void Broker::registerObject(ServerTypes st, Server s)
{
	
	regObjs[st] = s;

}
