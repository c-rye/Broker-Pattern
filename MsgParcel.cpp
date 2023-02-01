#include "MsgParcel.h"


// message parcels may in the future be expanded to include more information or identifiers
MsgParcel::MsgParcel()
{
	serviceType = Non;
}

// associate a message parcel with a certain service type 
MsgParcel::MsgParcel(ServiceTypes st)
{
	serviceType = st;
}

ServiceTypes MsgParcel::getServerType()
{
	return serviceType;
}

