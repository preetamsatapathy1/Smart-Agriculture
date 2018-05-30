int sensor_pin = A0;
int motor_pin=8;
int output_value ;

void setup() {

   Serial.begin(9600);

   Serial.println("Reading From the Sensor ...");

   delay(2000);

   }

void loop() {

   output_value= analogRead(sensor_pin);

   output_value = map(output_value,550,0,0,100);

   if(output_value>3.5)
   {Serial.println("HIGH MOISTURE") ;}

   else if(output_value>2)
   {Serial.println("MODERATE MOISTURE") ;}
   else
   {Serial.println("LOW MOISTURE") ;digitalWrite(motor_pin,HIGH);delay(1000);digitalWrite(motor_pin,LOW);}

   delay(1000);

   }
