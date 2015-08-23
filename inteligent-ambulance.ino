
int n=0;
int pin1 = 2;
int pin2 = 3;                                    //                            --6--
int pin3 = 4;                                    //                         5 |     | 7
int pin4 = 5;                                    //                           |--4--|
int pin5 = 6;                                    //                         1 |     | 3
int pin6 = 7;                                    //                            --2--
int pin7 = 8;
int gnd1 = 11;                                 //                          gnd1 is display 1's gnd
int gnd2 = 9;                                   //                          gnd2 is display 2's gnd
int timer = 50;                               //   A timer, to run the for loop 10 t1, which turns out as 1 second.
int value;
int t1 = 20;
int t2 = 20;
int t3 = 20;
long previousMillis = 0;
long interval = 10; 

void setup(){
  
  pinMode(19, OUTPUT);
    pinMode(18, OUTPUT);
    pinMode(17, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(15, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(10, OUTPUT);
    
    pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);           //The following sets up all of the pins for use.
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(gnd1, OUTPUT);
  pinMode(gnd2, OUTPUT);
  
  
  Serial.begin(9600);
    
    if(Serial.available())
 {
  int x=Serial.read();
  Serial.println(x);
  if(x==1)
  {
   digitalWrite(17, HIGH); 
  }
  else if(x==2)
  {
    digitalWrite(17, LOW); 
  }
  else{
    
  }
  
  
}
  else{
  n=1;
 
  while(1){  
    digitalWrite(17, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(14, HIGH);
    for (int i=0; i<timer; i++){ 

     t1=t1-1;                           //   The for loop, for running the program 10 t1.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);                         
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 20 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  
for (int i=0; i<timer; i++){
  t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 19 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
    t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 18 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
    t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 17 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
    t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 16 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
    t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 15 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
    t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 14 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
    t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 13 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 12 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 11 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
    t1=t1-1;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 10 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   
    t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 09 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 08 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 07 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 06 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 05 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
  t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 04 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  digitalWrite(18, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(17, LOW);
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                    //          Writes 03 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 02 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 01 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){
   t1=t1-1;  
    digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 00 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  digitalWrite(17, LOW);
  digitalWrite(18, LOW);
  digitalWrite(12, LOW);
  n=2;

    digitalWrite(13, HIGH);
    digitalWrite(19, HIGH);
    digitalWrite(14, HIGH);
    for (int i=0; i<timer; i++){ 
    t2--;        //   The for loop, for running the program 10 t1.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);                         
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 20 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  
for (int i=0; i<timer; i++){t2--;  
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 19 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 18 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 17 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 16 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 15 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 14 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){  t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 13 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 12 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 11 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 10 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 09 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 08 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 07 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 06 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 05 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 04 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  digitalWrite(12, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                    //          Writes 03 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 02 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 01 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){t2--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 00 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  digitalWrite(12, LOW);
  digitalWrite(15, LOW);
  digitalWrite(14, LOW);
  n=3;
  
    digitalWrite(16, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(19, HIGH);
    for (int i=0; i<timer; i++){    t3--;                 //   The for loop, for running the program 10 t1.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);                         
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 20 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  
for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 19 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 18 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 17 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 16 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 15 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 14 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 13 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 12 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 11 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 10 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 09 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 08 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 07 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 06 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 05 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 04 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  digitalWrite(15, HIGH);
  digitalWrite(18, HIGH);
  digitalWrite(16, LOW);
  digitalWrite(19, LOW);
  
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                    //          Writes 03 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 02 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 01 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }
  for (int i=0; i<timer; i++){ t3--;
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B0);
   digitalWrite(gnd2, B1);
   delay(10);                                        //          Writes 00 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, B1);
   digitalWrite(gnd2, B0);
   delay(10);
   
  }

    n=0;
    digitalWrite(15, LOW);
    digitalWrite(18, LOW);
  }
  
  
   
  }
  
}

void loop() {
  
  
  digitalWrite(13, HIGH);   //  Turns the TIMER ENDED LED on.
  
  
}



