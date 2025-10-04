#include <Keyboard.h> 
#include <Bounce2.h>
// ATENTIE TREBUIE SA FIE SELECTAT IN TOOL ARDUINO LEONARDO SAU MICRO ALTFEL NU COMPILEAZA
// merge numai pe procesor ATmega32u4 

//-------------------------------------------------

  const int Bt1 = 6;
  const int Bt2 = 7;
  const int Bt3 = 8;
  const int Bt4 = 9;
   
  //-------------------------------------------------

  Bounce button1 = Bounce();
  Bounce button2 = Bounce();
  Bounce button3 = Bounce();
  Bounce button4 = Bounce();
  
void setup() {
  
  Serial.begin(9600); 
  Keyboard.begin();  

 pinMode(Bt1,INPUT_PULLUP);
 pinMode(Bt2,INPUT_PULLUP);
 pinMode(Bt3,INPUT_PULLUP);
 pinMode(Bt4,INPUT_PULLUP);
 
 button1.attach(Bt1,INPUT_PULLUP); 
 button1.interval(10); 

 button2.attach(Bt2,INPUT_PULLUP);
 button2.interval(10);

 button3.attach(Bt3,INPUT_PULLUP);
 button3.interval(10);

 button4.attach(Bt4, INPUT_PULLUP);
 button4.interval(10);
    

}

void loop() {


  button1.update();
  button2.update();
  button3.update();
  button4.update();


//pt hold
  if (button1.fell()) {
   Keyboard.press('d');
}

if (button1.rose()) {
   Keyboard.release('d');
}



if (button2.fell()) {
   Keyboard.press('s');
}

if (button2.rose()) {
   Keyboard.release('s');
}



if (button3.fell()) {
   Keyboard.press('a');
}

if (button3.rose()) {
   Keyboard.release('a');
}



if (button4.fell()) {
   Keyboard.press('w');
}

if (button4.rose()) {
   Keyboard.release('w');
}

  