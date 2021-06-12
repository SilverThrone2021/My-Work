int b2 = 11;
void setup() 
{
  Serial.begin(9600);
  pinMode(2,INPUT);     // SW pin
  digitalWrite(2,HIGH);
pinMode(b2,INPUT_PULLUP);
}
int prev_state=0;   // previous state of switch
void loop() {
  int z=0,xpos=0,ypos=0;
  int x=analogRead(A0);

  int sensitivity=10;    // you can adjust the sensitivity based on your comfort
  if(x>=550)                     // when moved up 
  xpos=map(x,550,1023,0,sensitivity); 
  if(x<=450)                   // when moved down
  xpos=map(x,450,0,0,-sensitivity);   
 

  

int y=analogRead(A2);


if(y>=550)
ypos=map(y,550,1023,0,sensitivity);
if(y<=450)
ypos=map(y,450,0,0,-sensitivity);

  int curr_state=digitalRead(2);
  if(curr_state==1 && prev_state==0)   // when SW is pressed  
z=1;  
  
  
  else
  z=0;
  if(xpos!=0 or ypos!=0 or z==1 or (digitalRead(b2)==LOW)) // prints only when the joystick is moved
  {
  Serial.print(xpos);    // print the data and separating by ":"
  Serial.print(":");
  Serial.print(ypos);
  Serial.print(":");
  Serial.println(z);

if(digitalRead(b2)==LOW)
{Serial.print("E\n");}
else {Serial.println("0");}

  }
  prev_state=curr_state;
  delay(10);         // for normal operation


}
