int IRsensor=2; //second pin of Arduino Digital read pin


int SolenoidPin=9;// ninth pin of Arduino output pin

void setup()

{
Serial.begin(9600);

PinMode(SolenoidPin,OUTPUT);

PinMode(IRsensor,INPUT);

}

void loop()
{

int sensor_state; //variable to store 0 or 1 from IR Sensor

sensor_state=digitalRead(IRsensor);

if(sensor_state==1)

{

digitalWrite(SolenoidPin,HIGH);

delay(2000)//delay of 2 seconds
digitalWrite(SolenoidPin,LOW);

}
else
{

digitalWrite(SolenoidPin,LOW);

}

}
