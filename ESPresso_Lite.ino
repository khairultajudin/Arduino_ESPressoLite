/*******************************************************************************
 *  Cytron IoT Workshop
 *  
 *  This example demonstrates how to control the ESPresso Lite from iOS
 *  and Anroid using the Blynk platform.
 *
 *  Created by: Cytron Technologies Sdn Bhd.
 *  Website: www.cytron.com.my
 *  Email: support@cytron.com.my
*******************************************************************************/

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "9ae05b4a0f9740d68b932123a2ba0cd8";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "AndroidAP";
char pass[] = "password";

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}


