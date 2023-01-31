#include "Server.h"

using namespace std;


Server::Server() {
	name = "";

	data = 0;

	msgType = NO_MSG;

}
Server::Server(ServerTypes type)
{
	name = "";

	data = 0;

	msgType = NO_MSG;

	serverType = type;

}
Server::Server(string n, int d)
{
	name = n;

	data = d;

	msgType = NO_MSG;
}
void Server::setName(string n)
{
	name = n;
}
string Server::getName()
{
	return name;
}
void Server::setData(int d)
{
	data = d;
}
int Server::getData()
{
	return data;
}
;


