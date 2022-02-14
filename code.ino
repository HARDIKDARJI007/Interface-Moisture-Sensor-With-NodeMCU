int sense_Pin = A0; // sensor input at Analog pin A0
int value = 0;
void setup() {
   Serial.begin(9600);
   pinMode(16, OUTPUT); // connect Green LED to nodemcu Digital pin D0
   pinMode(2, OUTPUT);  // connect BLUE LED to nodemcu Digital pin D4
   delay(1000);
}
void loop() {

   Serial.print("MOISTURE LEVEL : ");
   value = analogRead(sense_Pin);
     Serial.println(value);

        if(value<500)
        {
            digitalWrite(16, HIGH); 
            Serial.println("land is wet");
            delay(1000);
            digitalWrite(16,LOW);
        }
       else
       {
           digitalWrite(2,HIGH);
           Serial.println("land is dry");
             delay(1000);
              digitalWrite(2, LOW);

       }       
}
