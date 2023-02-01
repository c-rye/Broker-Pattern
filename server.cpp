#include "Server.h"
#include <iostream>

using namespace std;


Server::Server() {
	name = "";

	data = 0;

	msgType = NO_MSG;

}
Server::Server(ServiceTypes server)
{
	name = "";

	data = 0;

	msgType = NO_MSG;

	serviceType = server;

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
void Server::setServerType(ServiceTypes sType)
{
	serviceType = sType;
}
ServiceTypes Server::getServerType()
{
	return serviceType;
}
void Server::getService()
{
	cout << "\nServer: getService() = " << (int)serviceType;
}
;


