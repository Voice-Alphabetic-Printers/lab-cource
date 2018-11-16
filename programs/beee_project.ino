#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

char buffer[20];

int charsRead;

int val;

void setup(){

Serial.begin(9600);

lcd.begin(16, 2);

}

void loop(){

while(Serial.available() > 0){

charsRead = Serial.readBytesUntil('\n', buffer, sizeof(buffer) - 1);

buffer[charsRead] = '\0';

lcd.print(buffer);

delay(4000);

lcd.clear();

}

}
