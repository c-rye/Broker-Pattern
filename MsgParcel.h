#pragma once
#include "ServiceTypes.h"



class MsgParcel
{
private:
	ServiceTypes serviceType;

public:

	MsgParcel();

	MsgParcel(ServiceTypes st);

	ServiceTypes getServerType();

};

