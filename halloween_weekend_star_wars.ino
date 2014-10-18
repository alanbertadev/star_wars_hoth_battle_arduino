int relayPin1 = 3;                 // IN1 Red Laser 1
int relayPin2 = 5;                 // IN2 Red Laser 2
int relayPin3 = 6;                 // IN3 Strobe Explosion
int relayPin4 = 9;                // IN4 Blue Laser 1
int relayPin5 = 10;                // IN5 Blue Laser 2
int relayPin6 = 11;                // IN6 AT AT Explosion Effect

void setup()
{  
  digitalWrite(relayPin1, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin2, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin3, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin4, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin5, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin6, HIGH);        // Prevents relays from starting up engaged
  pinMode(relayPin1, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin2, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin3, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin4, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin5, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin6, OUTPUT);      // sets the digital pin as output

}

void loop()
{
  // REMEMBER 
  // HIGH = OFF
  // LOW = ON
  delay(5104); // we have about a 5.1 second delay from on + ZUNE play button to running
  digitalWrite(relayPin1, LOW);  
  delay(556);  
  digitalWrite(relayPin2, LOW); 
  delay(500);
  digitalWrite(relayPin1, HIGH);
  delay(230);
  digitalWrite(relayPin3, LOW);
  delay(500);
  digitalWrite(relayPin2, HIGH); 
  // 7910 MS
  delay(1000);
  digitalWrite(relayPin3, HIGH);
  // 8910 MS
  // Rapid fire blue team
  delay(2100);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  //12810
  delay(3240);
  digitalWrite(relayPin2, LOW);
  // 16248
  delay(1286);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, LOW);
  delay(1600);
  digitalWrite(relayPin3, HIGH);
  // ~ 19134
  delay(1259);
  digitalWrite(relayPin1, LOW);
  delay(1286);
  digitalWrite(relayPin1, HIGH);
  // ~ 21679
  delay(3259);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin4, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, LOW);
  delay(300);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(relayPin6, LOW);
  delay(200);
  digitalWrite(relayPin6, HIGH);
  delay(200);
  digitalWrite(relayPin6, LOW);
  delay(200);
  digitalWrite(relayPin6, HIGH);
  delay(200);
  digitalWrite(relayPin6, LOW);
  delay(200);
  digitalWrite(relayPin6, HIGH);
  delay(200);
  digitalWrite(relayPin6, LOW);
  delay(1500);
  digitalWrite(relayPin6, HIGH);
  delay(60000);                  
}
