int redPin = 13;
char alp;
void setup() 
{
     Serial.begin(9600);
     pinMode(redPin, OUTPUT);
}
void sort(){
    digitalWrite(redPin,HIGH);
    delay(500);
    digitalWrite(redPin,LOW);
    delay(250);
}
void llong(){
  digitalWrite(redPin,HIGH);
  delay(1000);
  digitalWrite(redPin,LOW);
  delay(300);
}
void loop() {
  
  if (Serial.available()>0)
   {
        alp=Serial.read();
        Serial.println(alp);
        if (alp=='h'){
          for(int i=0;i<4;i++)
          sort();
        }
        else if(alp=='e'){
          sort();
        }
        else if(alp=='l'){
          sort();
          llong();
          for(int i=0;i<2;i++)
          sort();
        }
        else if(alp=='o'){
          llong();
          llong();
          llong();
        }
        else if(alp=='a')
        {
          sort();
          llong();
        }
        else if(alp=='b')
        {
          llong();
          for(int i=0;i<3;i++)
          sort();
        }
        else if(alp=='c')
        {
          llong();
          sort();
          llong();
          sort();
        }
         else if(alp=='d')
        {
          sort();
          llong();
          llong();
        }
         else if(alp=='f')
        {
          sort();
          sort();
          llong();
          sort();
        }
         else if(alp=='g')
        {
          llong();
          llong();
          sort();
        }
         else if(alp=='i')
        {
          for(int i=0;i<2;i++)
          sort();
        }
         else if(alp=='j')
        {
          sort();
          for(int i=0;i<3;i++)
          llong();
        }
        else if(alp=='k')
        {
          llong();
          sort();
          llong();
        }
        else if(alp=='m')
        {
          llong();
          llong();
        }
        else if(alp=='n')
        {
          llong();
          sort();
        }
        else if(alp=='p')
        {
          sort();
          llong();
          llong();
          sort();
        }
         else if(alp=='q')
        {
          llong();
          llong();
          sort();
          llong();
        }
        else if(alp=='r')
        {
          sort();
          llong();
          sort();
        }
        else if(alp=='t')
          llong();
        else if(alp=='u')
        {
          sort();
          sort();
          llong();
        }
        else if(alp=='v')
        {
          for(int i=0;i<3;i++)
          sort();
          llong();
        }
        else if(alp=='w')
        {
          sort();
          llong();
          llong();
        }
        else if(alp=='x')
        {
          llong();
          sort();
          sort();
          llong();
        }
        else if(alp=='y')
        {
          llong();
          sort();
          llong();
          llong();
        }
        else if(alp=='z')
        {
          llong();
          llong();
          sort();
          sort();
        }
        else  {
          Serial.println("input error!");
    }
  }  
}

