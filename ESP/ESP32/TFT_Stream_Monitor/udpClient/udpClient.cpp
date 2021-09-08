#include "udpClient.h"
#include "common.h"
#include <WiFi.h>
#include <WiFiUdp.h>

udpClient :: udpClient(cosnst char* ssid, const char* password)
	: _ssid(ssid),
	_password(password)
{
	_udp = new WiFiUDP;	
{

udpClient :: ~udpClient()
{
	delete _udp;	
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Init
 *  Description:  Setup WiFi STA and connects to Access Point  
 * =====================================================================================
 */
bool udpClient :: Init(void) 
{	
	PRINT("Connecting to WiFi STA %s...\n", ssid);
	if( !_ssid || _ssid[0] == '\0' || !_password || _password[0] == '\0)
		return false;
	WiFi.begin(_ssid, _password);
	while(WiFi.status != WL_CONNECTED){
		delay(500);
		PRINT(".");
		
	}
}

udpClient :: Open(void)
{

}

udpClient :: Close(void)
{

}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Loop
 *  Description:  listens for UDP commmands and does required operations on 
 *					display or other basic tasks 
 * =====================================================================================
 */
udpClient :: Loop(void)
{

}
