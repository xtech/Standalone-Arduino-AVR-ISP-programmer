/*
  Self-o-mat Loader

  This program is the one burned along with the customized bootloader onto each self-o-mat.

  by Clemens Elflein

  https://self-o-mat.de/
*/

// PIN_ON controls the power of the whole self-o-mat
const int PIN_ON=8;

// PIN_STATUS controls the status LED on the board.
const int PIN_STATUS=20;

bool waitingForSpace;

unsigned long lastBlink = 0;

void setup() {
  waitingForSpace = false;
  
  delay(1000);
  pinMode(PIN_STATUS, OUTPUT);
  pinMode(PIN_ON, OUTPUT);

  // Enable Power
  digitalWrite(PIN_ON, HIGH);

  // Wait for avrdude commands
  Serial.begin(38400); 
}


void loop() {
  while(Serial.available()) {
    char c = Serial.read();
    switch(c) {
      case '0':
        waitingForSpace = true;
        break;
      case 'i':
        Serial.write('?');
        waitingForSpace = false;
        break;
      case ' ':
        if(waitingForSpace) {
          digitalWrite(PIN_STATUS, HIGH);
          typedef void (*do_reboot_t)(void);
          const do_reboot_t do_reboot = (do_reboot_t)((FLASHEND - 511) >> 1);
          cli(); TCCR0A = TCCR1A = TCCR2A = 0; // make sure interrupts are off and timers are reset.
          do_reboot();
        }
      default:
        waitingForSpace = false;    
    }
  }
  if(millis() - lastBlink > 500) {
    // Blink the LED to show the user that the bootloader init firmware is running
    digitalWrite(PIN_STATUS, HIGH);
    delayMicroseconds(150);
    digitalWrite(PIN_STATUS, LOW);
    lastBlink = millis();
  }
}
