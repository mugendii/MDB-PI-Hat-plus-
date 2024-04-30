#include <WiFi.h>
#include <SPI.h>
#include <MFRC522.h>


const char* ssid     = "ATGuest";
const char* password = "GUESTpassword#";

WiFiServer server(80);
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600); // Initialize serial communications with the PC
    while (!Serial);    // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
    SPI.begin();        // Init SPI bus
    //mfrc522.PCD_Init(); // Init MFRC522 card

   // We start by connecting to a WiFi network

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());


}

void loop() {
  // put your main code here, to run repeatedly:

}
