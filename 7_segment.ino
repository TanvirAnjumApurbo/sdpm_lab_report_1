/*
  7-Segment Display (Common Cathode / Common Anode)
  -------------------------------------------------
  This code lights up segments to display the number "0".
  
  🔌 Connections (Arduino → 7-segment):
    Segment a → D2
    Segment b → D3
    Segment c → D4
    Segment d → D5
    Segment e → D6
    Segment f → D7
    Segment g → D8
    Common Pin:
      - Common Cathode (CC) → GND
      - Common Anode (CA) → 5V

  ⚙️ Notes:
    - If using Common Cathode (CC):
        - Write HIGH to turn ON a segment
        - Write LOW to turn OFF a segment
    - If using Common Anode (CA):
        - Write LOW to turn ON a segment
        - Write HIGH to turn OFF a segment
*/

int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7, g = 8; // Segment pins

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // Display number 0
  digitalWrite(a, HIGH); // Segment a ON
  digitalWrite(b, HIGH); // Segment b ON
  digitalWrite(c, HIGH); // Segment c ON
  digitalWrite(d, HIGH); // Segment d ON
  digitalWrite(e, HIGH); // Segment e ON
  digitalWrite(f, HIGH); // Segment f ON
  digitalWrite(g, LOW);  // Segment g OFF

  delay(1000); // Keep the number displayed for 1 second
}
