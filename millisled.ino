const int ledPin = D8; // LED'in bağlı olduğu pin
unsigned long öncekiZaman = 0; // Son işlem zamanı
const long interval = 1000;    // LED'in yanıp sönme aralığı (milisaniye)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long şuAnkiZaman = millis();

  if (şuAnkiZaman - öncekiZaman >= interval) {
    öncekiZaman = şuAnkiZaman; // Son işlem zamanını güncelle

    // LED'i yak veya söndür
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
}
