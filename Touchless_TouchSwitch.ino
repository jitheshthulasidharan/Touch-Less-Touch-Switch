/*INPUT*/
const int B0_sensorPin = 38;
const int B1_sensorPin = 42;
const int B2_sensorPin = 34;
const int B3_sensorPin = 26;
const int B4_sensorPin = 3;
const int B5_sensorPin = 7;
const int B6_sensorPin = 11;
const int B7_sensorPin = 1;
const int B8_sensorPin = 5;
const int B9_sensorPin = 9;
const int BO_sensorPin = 46;
const int BC_sensorPin = 30;
const int BUP_sensorPin = 13;
const int BDN_sensorPin = 52;

/*OUTPUT*/
const int B0_ledPin = 40;
const int B1_ledPin = 44;
const int B2_ledPin = 36;
const int B3_ledPin = 28;
const int B4_ledPin = 2;
const int B5_ledPin = 6;
const int B6_ledPin = 10;
const int B7_ledPin = 0;
const int B8_ledPin = 4;
const int B9_ledPin = 8;
const int BO_ledPin = 48;
const int BC_ledPin = 32;
const int BUP_ledPin = 12;
const int BDN_ledPin = 50;

/*PROGRAM STATE*/
int programState0 = 0;
int programState1 = 0;
int programState2 = 0;
int programState3 = 0;
int programState4 = 0;
int programState5 = 0;
int programState6 = 0;
int programState7 = 0;
int programState8 = 0;
int programState9 = 0;
int programStateO = 0;
int programStateC = 0;
int programStateUP = 0;
int programStateDN = 0;

/*BUTTON STATE"*/
int buttonState0;
int buttonState1;
int buttonState2;
int buttonState3;
int buttonState4;
int buttonState5;
int buttonState6;
int buttonState7;
int buttonState8;
int buttonState9;
int buttonStateO;
int buttonStateC;
int buttonStateUP;
int buttonStateDN;

long buttonMillis = 0;
const long intervalButton = 2000;   

long ledMillis = 0;
const long intervalLed = 10000;   

void setup() {
  pinMode(B0_ledPin, OUTPUT);
  pinMode(B1_ledPin, OUTPUT);
  pinMode(B2_ledPin, OUTPUT); 
  pinMode(B3_ledPin, OUTPUT); 
  pinMode(B4_ledPin, OUTPUT); 
  pinMode(B5_ledPin, OUTPUT); 
  pinMode(B6_ledPin, OUTPUT); 
  pinMode(B7_ledPin, OUTPUT); 
  pinMode(B8_ledPin, OUTPUT); 
  pinMode(B9_ledPin, OUTPUT); 
  pinMode(BO_ledPin, OUTPUT); 
  pinMode(BC_ledPin, OUTPUT);       
  pinMode(BUP_ledPin, OUTPUT); 
  pinMode(BDN_ledPin, OUTPUT); 
  
  pinMode(B0_sensorPin, INPUT);
  pinMode(B1_sensorPin, INPUT);
  pinMode(B2_sensorPin, INPUT);
  pinMode(B3_sensorPin, INPUT);
  pinMode(B4_sensorPin, INPUT);
  pinMode(B5_sensorPin, INPUT);
  pinMode(B6_sensorPin, INPUT);
  pinMode(B7_sensorPin, INPUT);
  pinMode(B8_sensorPin, INPUT);
  pinMode(B9_sensorPin, INPUT);
  pinMode(BO_sensorPin, INPUT);
  pinMode(BC_sensorPin, INPUT);
  pinMode(BUP_sensorPin, INPUT);
  pinMode(BDN_sensorPin, INPUT);
       
  digitalWrite(B0_sensorPin, HIGH);
  digitalWrite(B1_sensorPin, HIGH);
  digitalWrite(B2_sensorPin, HIGH);
  digitalWrite(B3_sensorPin, HIGH);
  digitalWrite(B4_sensorPin, HIGH);
  digitalWrite(B5_sensorPin, HIGH);
  digitalWrite(B6_sensorPin, HIGH);
  digitalWrite(B7_sensorPin, HIGH);
  digitalWrite(B8_sensorPin, HIGH);
  digitalWrite(B9_sensorPin, HIGH);
  digitalWrite(BO_sensorPin, HIGH);
  digitalWrite(BC_sensorPin, HIGH);
  digitalWrite(BUP_sensorPin, HIGH);
  digitalWrite(BDN_sensorPin, HIGH);
}

void loop()
{
  /* BUTTON 0 */
  {
  unsigned long currentMillis = millis();
  buttonState0 = digitalRead(B0_sensorPin);
 
  if (buttonState0 == LOW && programState0 == 0) {
    buttonMillis = currentMillis;
    programState0 = 1;
  }
  else if (programState0 == 1 && buttonState0 == HIGH) {
        programState0 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState0 == 1) {
    programState0 = 2;
    ledMillis = currentMillis;

    digitalWrite(B0_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState0 == 2) {
    programState0 = 0;

    digitalWrite(B0_ledPin, LOW);
  }
  }
  
  /* BUTTON 1 */
  
  {
  unsigned long currentMillis = millis();
  buttonState1 = digitalRead(B1_sensorPin);
 
  if (buttonState1 == LOW && programState1 == 0) {
    buttonMillis = currentMillis;
    programState1 = 1;
  }
  else if (programState1 == 1 && buttonState1 == HIGH) {
        programState1 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState1 == 1) {
    programState1 = 2;
    ledMillis = currentMillis;

    digitalWrite(B1_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState1 == 2) {
    programState1 = 0;

    digitalWrite(B1_ledPin, LOW);
  }
  }

  /* BUTTON 2 */
  
  {
      unsigned long currentMillis = millis();
  buttonState2 = digitalRead(B2_sensorPin);
 
  if (buttonState2 == LOW && programState2 == 0) {
    buttonMillis = currentMillis;
    programState2 = 1;
  }
  else if (programState2 == 1 && buttonState2 == HIGH) {
        programState2 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState2 == 1) {
    programState2 = 2;
    ledMillis = currentMillis;

    digitalWrite(B2_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState2 == 2) {
    programState2 = 0;

    digitalWrite(B2_ledPin, LOW);
  }
  }

  /* BUTTON 3 */

  {
      unsigned long currentMillis = millis();
  buttonState3 = digitalRead(B3_sensorPin);
 
  if (buttonState3 == LOW && programState3 == 0) {
    buttonMillis = currentMillis;
    programState3 = 1;
  }
  else if (programState3 == 1 && buttonState3 == HIGH) {
        programState3 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState3 == 1) {
    programState3 = 2;
    ledMillis = currentMillis;

    digitalWrite(B3_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState3 == 2) {
    programState3 = 0;

    digitalWrite(B3_ledPin, LOW);
  }
  }

  /* BUTTON 4 */
  {
      unsigned long currentMillis = millis();
  buttonState4 = digitalRead(B4_sensorPin);
 
  if (buttonState4 == LOW && programState4 == 0) {
    buttonMillis = currentMillis;
    programState4 = 1;
  }
  else if (programState4 == 1 && buttonState4 == HIGH) {
        programState4 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState4 == 1) {
    programState4 = 2;
    ledMillis = currentMillis;

    digitalWrite(B4_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState4 == 2) {
    programState4 = 0;

    digitalWrite(B4_ledPin, LOW);
  }
  }

  /* BUTTON 5 */

  {
      unsigned long currentMillis = millis();
  buttonState5 = digitalRead(B5_sensorPin);
 
  if (buttonState5 == LOW && programState5 == 0) {
    buttonMillis = currentMillis;
    programState5 = 1;
  }
  else if (programState5 == 1 && buttonState5 == HIGH) {
        programState5 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState5 == 1) {
    programState5 = 2;
    ledMillis = currentMillis;

    digitalWrite(B5_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState5 == 2) {
    programState5 = 0;

    digitalWrite(B5_ledPin, LOW);
  }
  }

  /* BUTTON 6 */

  {
      unsigned long currentMillis = millis();
  buttonState6 = digitalRead(B6_sensorPin);
 
  if (buttonState6 == LOW && programState6 == 0) {
    buttonMillis = currentMillis;
    programState6 = 1;
  }
  else if (programState6 == 1 && buttonState6 == HIGH) {
        programState6 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState6 == 1) {
    programState6 = 2;
    ledMillis = currentMillis;

    digitalWrite(B6_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState6 == 2) {
    programState6 = 0;

    digitalWrite(B6_ledPin, LOW);
  }
  }

  /* BUTTON 7 */

  {
      unsigned long currentMillis = millis();
  buttonState7 = digitalRead(B7_sensorPin);
 
  if (buttonState7 == LOW && programState7 == 0) {
    buttonMillis = currentMillis;
    programState7 = 1;
  }
  else if (programState7 == 1 && buttonState7 == HIGH) {
        programState7 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState7 == 1) {
    programState7 = 2;
    ledMillis = currentMillis;

    digitalWrite(B7_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState7 == 2) {
    programState7 = 0;

    digitalWrite(B7_ledPin, LOW);
  }
  }

  /* BUTTON 8 */

  {
      unsigned long currentMillis = millis();
  buttonState8 = digitalRead(B8_sensorPin);
 
  if (buttonState8 == LOW && programState8 == 0) {
    buttonMillis = currentMillis;
    programState8 = 1;
  }
  else if (programState8 == 1 && buttonState8 == HIGH) {
        programState8 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState8 == 1) {
    programState8 = 2;
    ledMillis = currentMillis;

    digitalWrite(B8_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState8 == 2) {
    programState8 = 0;

    digitalWrite(B8_ledPin, LOW);
  }
  }

  /* BUTTON 9 */

  {
      unsigned long currentMillis = millis();
  buttonState9 = digitalRead(B9_sensorPin);
 
  if (buttonState9 == LOW && programState9 == 0) {
    buttonMillis = currentMillis;
    programState9 = 1;
  }
  else if (programState9 == 1 && buttonState9 == HIGH) {
        programState9 = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programState9 == 1) {
    programState9 = 2;
    ledMillis = currentMillis;

    digitalWrite(B9_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programState9 == 2) {
    programState9 = 0;

    digitalWrite(B9_ledPin, LOW);
  }
  }

  /* BUTTON OPEN */

  {
    unsigned long currentMillis = millis();
  buttonStateO = digitalRead(BO_sensorPin);
 
  if (buttonStateO == LOW && programStateO == 0) {
    buttonMillis = currentMillis;
    programStateO = 1;
  }
  else if (programStateO == 1 && buttonStateO == HIGH) {
        programStateO = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programStateO == 1) {
    programStateO = 2;
    ledMillis = currentMillis;

    digitalWrite(BO_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programStateO == 2) {
    programStateO = 0;

    digitalWrite(BO_ledPin, LOW);
  }
  }

  /* BUTTON CLOSE */

  {
    unsigned long currentMillis = millis();
  buttonStateC = digitalRead(BC_sensorPin);
 
  if (buttonStateC == LOW && programStateC == 0) {
    buttonMillis = currentMillis;
    programStateC = 1;
  }
  else if (programStateC == 1 && buttonStateC == HIGH) {
        programStateC = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programStateC == 1) {
    programStateC = 2;
    ledMillis = currentMillis;

    digitalWrite(BC_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programStateC == 2) {
    programStateC = 0;

    digitalWrite(BC_ledPin, LOW);
  }
  }

  /* BUTTON UP */

  {
    unsigned long currentMillis = millis();
  buttonStateUP = digitalRead(BUP_sensorPin);
 
  if (buttonStateUP == LOW && programStateUP == 0) {
    buttonMillis = currentMillis;
    programStateUP = 1;
  }
  else if (programStateUP == 1 && buttonStateUP == HIGH) {
        programStateUP = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programStateUP == 1) {
    programStateUP = 2;
    ledMillis = currentMillis;

    digitalWrite(BUP_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programStateUP == 2) {
    programStateUP = 0;

    digitalWrite(BUP_ledPin, LOW);
  }
  }

  /* BUTTON DOWN */

  {
    unsigned long currentMillis = millis();
  buttonStateDN = digitalRead(BDN_sensorPin);
 
  if (buttonStateDN == LOW && programStateDN == 0) {
    buttonMillis = currentMillis;
    programStateDN = 1;
  }
  else if (programStateDN == 1 && buttonStateDN == HIGH) {
        programStateDN = 0; //reset
  }
  if(currentMillis - buttonMillis > intervalButton && programStateDN == 1) {
    programStateDN = 2;
    ledMillis = currentMillis;

    digitalWrite(BDN_ledPin, HIGH);
  }

  if(currentMillis - ledMillis > intervalLed && programStateDN == 2) {
    programStateDN = 0;

    digitalWrite(BDN_ledPin, LOW);
  }
  }
}
