#ifndef _UDP_CLIENT_H
#define _UDP_CLIENT_H

#include <stdio.h>
#include <stdint.h>


/*
 *--------------------------------------------------------------------------------------
 *       Class:  UdpClient
 *      Method:  UdpClient
 * Description:  Class to handle UDP command from network
 *--------------------------------------------------------------------------------------
 */
udpClient::udpClient ()

{
public:
									 udpClient(const char* ssid,const char* password);
									~udpClient();
	bool							Init(const char* hostname, unsigned port);
	bool							Open(void);	
	bool							Close(void);
	void							Loop(void);

private:


	WiFiUDP						   *_udp;
	bool							_init;
	const char*						_ssid;
	const char*						_password;
	const char*						_hostname;
	unsigned						_port;

}  /* -----  end of method UdpClient::UdpClient  (constructor)  ----- */


#endif // _UDP_CLIENT_H
