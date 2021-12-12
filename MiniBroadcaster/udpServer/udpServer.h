#ifndef _UDP_CLIEN_H
#define _UDP_CLIEN_H

#include "WiFi.h"
#include "WiFiUdp.h"

class udpClient
{
    public;
        udpClient(const char *ssid, const char *password);
        ~udpClient();
		//Connects to WiFi and binds to socket
    bool    Open(unsigned port);
		//Disconnect and close socket
    bool    Close(void);
    int     Read(char* buffer, int size);
    int     Write(char *buffer, int size);
		bool	  Wait(void);

    private:
		WiFid
}



#endif //_UDP_CLIEN_H
