 #define ledR 6
 #define ledG 4
 #define ledB 5   
 #define DAIL A0 

 void setup(){
     
 Serial.begin(9600);
}
     
 void loop(){
   analogRead(DAIL);
   analogWrite(ledG,255);
   delay(3*60*1000);
   analogWrite(ledG,0);

  for (int i=0 ;i <30;i++){
    analogWrite(ledR,255);
    analogWrite(ledG,191);
    analogWrite(ledB,0);
    delay(200); 
    
    analogWrite(ledR,0);
    analogWrite(ledG,0);
    analogWrite(ledB,0);
    delay(200);
    
    analogWrite(ledR,0);
    analogWrite(ledR,255);
    delay(3*60*1000);
    analogWrite(ledR,0);
  }
  }
  
