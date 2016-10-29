
const int A = 5;     // the number of the pushbutton pin
const int B = 4;     // the number of the pushbutton pin
const int C = 3;     // the number of the pushbutton pin
const int LED1 =  13;      // the number of the LED pin
const int LED2 =  12;      // the number of the LED pin
const int LED3 =  11;      // the number of the LED pin
const int LED4 =  10;      // the number of the LED pin
const int BUZZER = 9; 
int State1 = 0;         // variable for reading the pushbutton status
int State2 = 0;         // variable for reading the pushbutton status
int State3 = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(C, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  State1 = digitalRead(A);
  State2 = digitalRead(B);
  State3 = digitalRead(C);
  
  if (State1 == HIGH) 
  {
    digitalWrite(BUZZER, HIGH);
    delay(100);
    digitalWrite(BUZZER, LOW);
    while(1)
    {
     State2 = digitalRead(B);
     State3 = digitalRead(C);
    if((State2==HIGH)||(State3==HIGH))
      {break;} 
    //1st Pattern
    digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                 // wait for a 0.1 second
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED4, HIGH);
    delay(100);                
    digitalWrite(LED1, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
    digitalWrite(LED4, LOW);
    delay(100); 
    }
}
  else if (State2 == HIGH){
    digitalWrite(BUZZER, HIGH);
    delay(100);
    digitalWrite(BUZZER, LOW);
    delay(100);
    digitalWrite(BUZZER, HIGH);
    delay(100);
    digitalWrite(BUZZER, LOW);
    
    while(1){
     State1 = digitalRead(A);
     State3 = digitalRead(C);
    if((State1==HIGH)||(State3==HIGH))
      {break;}
    // 2nd Pattern
    digitalWrite(LED1, HIGH); 
    digitalWrite(LED4, HIGH);  
    delay(250);
    digitalWrite(LED1, LOW);   
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
    delay(250);        
    digitalWrite(LED1, LOW);   
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);  
    delay(250);
    digitalWrite(LED1, HIGH);   
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);  
    delay(250);
    }
  }
  else if (State3 == HIGH)
  {
    digitalWrite(BUZZER, HIGH);
    delay(100);
    digitalWrite(BUZZER, LOW);
    delay(100);
    digitalWrite(BUZZER, HIGH);
    delay(100);
    digitalWrite(BUZZER, LOW);
    delay(100);
    digitalWrite(BUZZER, HIGH);
    delay(100);
    digitalWrite(BUZZER, LOW);
    while(1)
    {
     State1 = digitalRead(A);
     State2 = digitalRead(B);
    if((State1==HIGH)||(State2==HIGH))
      {break;}
    
    // 3rd Pattern
    digitalWrite(LED1, HIGH);   
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(250);
    digitalWrite(LED1, LOW);   
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    delay(250); 
  }
}
  else {
    // turn LED off:
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(BUZZER, LOW);   
  }
}
