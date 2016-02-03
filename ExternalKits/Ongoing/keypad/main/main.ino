/* Scan pressed key, store in char c, and print to Serial Monitor */

#include "keypad.h"

void setup() {
  keypad_init(100); // 0 ~ 350
  Serial.begin(9600);
}

void loop() {
  
  char c = scan_input();
  if (c != '\0')
     Serial.print(c);
  
  delay(200);       
}

