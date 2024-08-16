/*
This is code to control 4 to 16 channel 5V Relay module using Arduino
 * watch the video on how to use 4 to unlimited Relay channels  https://youtu.be/Wbm3MCMgM_s
 
 */
/*
 *  This code is written by Ahmad Shamshiri for Robojax.com
// Written Mar 26, 2018 at 12:14 in Ajax, Ontario, Canada

 *  
 */

int ch = 4;// number of relays you got
int relay[]={2,3,4,5}; // Arduino pin numbers. the same number of relay should be defined here as input pins


int wait = 2000;// delay time
int i=0;

void setup() {
    Serial.begin(9600);// prepare Serial monitor
    // set  pins as output
 for(i=0; i < ch; i++)
 {    
    pinMode(relay[i], OUTPUT);// sent i(th) pin as output
   digitalWrite(relay[i], HIGH); // Turn the relay OFF  
 }
               
    Serial.println("Robojax 4 Relay Test");
}

void loop() {
    
     
 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" ON");
      digitalWrite(relay[i], LOW); // Turn the relay ON    
      delay(wait);  
 }// for loop


 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" OFF");
      digitalWrite(relay[i], HIGH); // Turn the relay OFF    
      delay(wait);  
 }// for loop

    Serial.println("====== loop done ==");

}// loop
