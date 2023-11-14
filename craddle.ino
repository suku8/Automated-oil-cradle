const int pwm = 2 ;  //initializing pin 2 as pwm
const int in_1 = 8 ;
const int in_2 = 9 ;

//For providing logic to L298 IC to choose the direction of the DC motor 

void setup()
{
pinMode(pwm,OUTPUT) ;   //we have to set PWM pin as output
pinMode(in_1,OUTPUT) ;  //Logic pins are also set as output
pinMode(in_2,OUTPUT) ;
}

void loop()
{
//For Clock wise motion , in_1 = High , in_2 = Low

digitalWrite(in_1,HIGH) ;
digitalWrite(in_2,LOW) ;
analogWrite(pwm,100);
delay(2500);
digitalWrite(in_1,HIGH) ;
digitalWrite(in_2,HIGH) ;
analogWrite(pwm,100);
delay(1000);
digitalWrite(in_1,LOW) ;
digitalWrite(in_2,HIGH) ;
analogWrite(pwm,100);
delay(5000);
digitalWrite(in_1,HIGH) ;
digitalWrite(in_2,HIGH) ;
analogWrite(pwm,100);
delay(1000);

}