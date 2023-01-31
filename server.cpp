#include "Server.h"

using namespace std;


Server::Server() {
	name = "";

	data = 0;

	msgType = NO_MSG;

	serverType = 0;

}
Server::Server(int enumeration)
{
	name = "";

	data = 0;

	msgType = NO_MSG;

	serverType = enumeration;

}
Server::Server(string n, int d)
{
	name = n;

	data = d;

	msgType = NO_MSG;

	serverType = 0;
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


