
#include <MFRC522.h> // NFC Reader Library
#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <Task.h> // Tasker LIb

// For WLAN Auto Config
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

WiFiClientSecure client;

const char* ssid = "........";
const char* password = "........";

const char* apihost = "api.awswhateverserver.com";
const int httpsPort = 443;

// Use web browser to view and copy
// SHA1 fingerprint of the certificate
const char* fingerprint = "CF 05 98 89 CA FF 8E D8 5E 5C E0 C2 E4 F7 E6 C3 C7 50 DD 5C";

void configModeCallback (WiFiManager *myWiFiManager) {
  Serial.println("Entered config mode");
  Serial.println(WiFi.softAPIP());
  Serial.println(myWiFiManager->getConfigPortalSSID());
}

void setup() {
  // put your setup code here, to run once:
  WiFiManager wifiManager;

  wifiManager.setAPCallback(configModeCallback);

  //first parameter is name of access point, second is the password
  wifiManager.autoConnect("CoffeeCupCountaSetup", "anotherPasswordT"); // Blocking call

  
}

void loop() {
  // put your main code here, to run repeatedly:
}
