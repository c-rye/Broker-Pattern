#include "MsgParcel.h"

MsgParcel::MsgParcel()
{
	serviceType = Non;
}

MsgParcel::MsgParcel(ServiceTypes st)
{
	serviceType = st;
}

ServiceTypes MsgParcel::getServerType()
{
	return serviceType;
}

