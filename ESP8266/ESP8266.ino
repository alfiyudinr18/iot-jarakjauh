#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "auth token" // token auth blynk
int led1 = D2;

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "nama wifi";// nama wifi
char pass[] = "error404"; // password wifi

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(led1, param.asInt());
}

void setup() {
  pinMode(led1, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}

