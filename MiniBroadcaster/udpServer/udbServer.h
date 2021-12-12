#pragma once

typedef
struct UDPConfig
{
	std::string ip;
	uint64_t port;
}UDPConfig_t;

class UDPServer
{

public:
							UDPServer();
							~UDPServer();
	bool					SetConfig(
	bool 					Start();
	bool					Stop();
	



private:




};
