#ifndef __DRV_NTP_H__
#define __DRV_NTP_H__

#include "../httpserver/new_http.h"

void NTP_Init();
void NTP_OnEverySecond();
// returns number of seconds passed after 1900
unsigned int NTP_GetCurrentTime();
void NTP_AppendInformationToHTTPIndexPage(http_request_t* request);
bool NTP_IsTimeSynced();

#endif /* __DRV_NTP_H__ */

