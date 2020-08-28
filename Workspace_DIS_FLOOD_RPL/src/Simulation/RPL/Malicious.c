#include "main.h"
#include "RPL.h"
#include "RPL_enum.h"

#define MALICIOUS_NODE1 1

int fn_NetSim_RPL_MaliciousNode(NetSim_EVENTDETAILS*);
void rpl_drop_msg();

int fn_NetSim_RPL_MaliciousNode(NetSim_EVENTDETAILS* pstruEventDetails)
{
	if (pstruEventDetails->nDeviceId == MALICIOUS_NODE1)
	{ /*For multiple malicious nodes use if(pstruEventDetails->nDeviceId == MALICIOUS_NODE1 || pstruEventDetails->nDeviceId == MALICIOUS_NODE2)*/
		return 1;
	}
	return 0;
}

void rpl_drop_msg()
{
	fn_NetSim_RPL_FreePacket(pstruEventDetails->pPacket);
	pstruEventDetails->pPacket = NULL;

}
