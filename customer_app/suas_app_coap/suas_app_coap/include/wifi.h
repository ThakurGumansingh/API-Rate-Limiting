#ifndef __WIFI_H
#define __WIFI_H

// Credentials
// Do not hardcode credentials in production code
#define WIFI_SSID "guman"
#define WIFI_PW "guman123"

// Wifi modes
enum app_wifi_role { UNINITIALIZED = 0, AP, STA };

// Function prototypes
extern "C" void task_wifi([[gnu::unused]] void *pvParameters);
#endif
