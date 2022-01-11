int LED = 1;
int buttonState = 0;
int pushButton = 6;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pushButton, INPUT);
pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(pushButton);
if(buttonState == HIGH)
{
digitalWrite(LED, HIGH);
Serial.print("Pushbutton is pressed, value is: ");
Serial.println(buttonState); 
}
else
{
  digitalWrite(LED, LOW);
}
}
