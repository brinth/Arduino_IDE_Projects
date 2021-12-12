#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "espsystem.h"
#include "esp_spi_flash.h"
#include "udpServer.h"
#include "display.h"

#define   MAX_PAGE_HEIGHT  320
#define	  MAX_PAGE_WIDTH   480

Page  		Page1("HomePage");
Page 			Page2("WeatherPage");
Page 			Page3("StreamPage");
Page* 		PageList = {Page1, Page2, Page3};

udpServer	udp("Jayaraman_Jio_WiFi", "Gja65*45-=@tg");
PageControl pageCtrl(PageList);

void createHomePage(void)
{
	Homepage.CreateRect("bg", 0, 0, MAX_PAGE_WIDTH, MAX_PAGE_HEIGHT);
	Homepage.CreateRect("CentreFrame", MAX_PAGE_WIDTH - (MAX_PAGE_WIDTH / 2 - 100) ,
			MAX_PAGE_HEIGHT - (MAX_PAGE_HEIGHT / 2 - 150),
			MAX_PAGE_WIDTH / 2 - 100, MAX_PAGE_HEIGHT / 2 - 100);
	char test_msg[200] = {};
	sprintf(test_msg, "Date: %d-%d-%d Location: %s Temp:%f*C", 30, 12, 2050, "Coimbatore", 27.5);
	Homepage.Text("Timestamp", test_msg, MAX_PAGE_WIDTH - (MAX_PAGE_WIDTH / 2 - 150),
			MAX_PAGE_HEIGHT - (MAX_PAGE_HEIGHT / 2 - 150));
}

void createWeatherPage(void)
{
	WeatherPage.CreateRect("bg", 0, 0, MAX_PAGE_WIDTH, MAX_PAGE_HEIGHT);
	char weather[200] = {};
	WeatherPage.Text("Weather", weather, MAX_PAGE_WIDTH / 2 - 100, MAX_PAGE_HEIGHT / 2 - 150);
	
}

void createStreamPage(void)
{
	StreamPage.CreateRect("bg", 0, 0, MAX_PAGE_WIDTH, MAX_PAGE_HEIGHT);
}


void main()
{
	udp.Open();
	createHomePage();
	createWeatherPage();
	createStreamPage();
//Handle UDP Requests on Core1


//Handle Display Update on Core 2


}

void loop()
{

}
