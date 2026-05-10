#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(300);
    Serial.println("Boot: PlatformIO OK");
    pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
    static uint32_t last = 0;
    uint32_t now = millis();
    if (now - last >= 1000) {
        last = now;
        digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
        Serial.print("Uptime(ms): ");
        Serial.println(now);
    }
}