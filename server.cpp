#include "server.h"

using namespace std;


server::server() {
	name = "";

	data = 0;

	msgType = NO_MSG;

}
server::server(string n, int d)
{
	name = n;

	data = d;

	msgType = NO_MSG;
}
void server::setName(string n)
{
	name = n;
}
string server::getName()
{
	return name;
}
void server::setData(int d)
{
	data = d;
}
int server::getData()
{
	return data;
}
;


