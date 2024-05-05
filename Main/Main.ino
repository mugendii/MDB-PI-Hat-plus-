#include <WiFi.h>
#include <SPI.h>
#include <MFRC522.h>


const char* ssid     = "ATGuest";
const char* password = "GUESTpassword#";


constexpr uint8_t RST_PIN = 3;     // 
constexpr uint8_t SS_PIN = 4;     //
MFRC522 rfid(SS_PIN, RST_PIN); // Instance of the class
MFRC522::MIFARE_Key key;


String tag;

WiFiServer server(80);
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600); // Initialize serial communications with the PC
    while (!Serial);    // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
    SPI.begin();        // Init SPI bus
    rfid.PCD_Init(); // Init MFRC522 card

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

    
    Serial.print("MOSI: ");
    Serial.println(MOSI);
    Serial.print("MISO: ");
    Serial.println(MISO);
    Serial.print("SCK: ");
    Serial.println(SCK);
    Serial.print("SS: ");
    Serial.println(SS);
}

void loop() {
  // put your main code here, to run repeatedly:
  rfid_card();
}
void rfid_card(){
   
}
