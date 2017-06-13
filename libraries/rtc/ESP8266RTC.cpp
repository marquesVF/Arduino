#include "ESP8266RTC.h"
#include "rtctime.h"

int RTC::rtctime_get(){
	struct rtc_timeval tv;
	rtctime_gettimeofday(&tv);
	return (int) tv.tv_sec;
}
