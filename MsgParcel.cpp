#include "MsgParcel.h"

MsgParcel::MsgParcel()
{
	serverType = Non;
}

MsgParcel::MsgParcel(ServerTypes st)
{
	serverType = st;
}
