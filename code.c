// Include the IRremote library
#include <IRremote.h>

// Pin Definitions
#define RECV_PIN 11 // Pin connected to IR Receiver OUT
#define RELAY2 10    // Pin connected to Relay 2
#define RELAY3 9    // Pin connected to Relay 3
#define RELAY4 8   // Pin connected to Relay 4

// Create an IR receiver object
IRrecv irrecv(RECV_PIN);
decode_results results; // Stores received IR signal

void setup() {
  // Start Serial Monitor for debugging
  Serial.begin(9600);

  // Initialize IR receiver
  irrecv.enableIRIn();

  // Set relay pins as OUTPUT
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  // Turn off all relays initially (active LOW relays)
  digitalWrite(RELAY2, HIGH); // Relay OFF
  digitalWrite(RELAY3, HIGH); // Relay OFF
  digitalWrite(RELAY4, HIGH); // Relay OFF
}

void loop() {
  // Check if an IR signal is received
  if (irrecv.decode(&results)) {
    // Print the received code to Serial Monitor in HEX format
    Serial.println(results.value, HEX);

    // Compare received code and control relays
switch (results.value) {
      case 0x1FE50AF: // Button for Light 1
        digitalWrite(RELAY2, !digitalRead(RELAY2)); 
// Toggle Light 1
        break;
      case 0x1FED827: // Button for Light 2
        digitalWrite(RELAY3, !digitalRead(RELAY3)); 
// Toggle Light 2
        break;
      case 0x1FEF807: // Button for Light 3
        digitalWrite(RELAY4, !digitalRead(RELAY4)); 
// Toggle Light 3
        break;
      case 0x1FEE01F: // Turn OFF all lights
        digitalWrite(RELAY2, HIGH);
        digitalWrite(RELAY3, HIGH);
        digitalWrite(RELAY4, HIGH);
        break;
      case 0x1FE48B7: // Turn ON all lights
        digitalWrite(RELAY2, LOW);
        digitalWrite(RELAY3, LOW);
        digitalWrite(RELAY4, LOW);
        break;
    }

    // Resume IR receiver for the next signal
    irrecv.resume();
  }
}
