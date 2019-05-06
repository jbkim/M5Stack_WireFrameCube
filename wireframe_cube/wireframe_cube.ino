#include <M5Stack.h>

#define LINE_COLOR  WHITE

int hSpin = 160;
int vSpin = 200;
int vSpin2 = 280;
int SpinRadius = 60;

void setup()   {   
  M5.begin();
  // M5.Lcd.setRotation(1);
  M5.Lcd.fillScreen(TFT_BLACK);
}

void loop(){
  for(int i = 60; i > 0; i--){          
    M5.Lcd.fillScreen(TFT_BLACK);
                              
    float SpinAngle = i * 6; 
    SpinAngle = SpinAngle / 57.296;
    float SpinAngle2 = SpinAngle + 90 / 57.296;
    
    int a = (hSpin + (sin(SpinAngle) * (SpinRadius / 2)));
    int b = (vSpin - (cos(SpinAngle) * (SpinRadius / 2)))/2;
    int c = (hSpin - (sin(SpinAngle) * (SpinRadius / 2)));
    int d = (vSpin + (cos(SpinAngle) * (SpinRadius / 2)))/2;

    int a1 = (hSpin + (sin(SpinAngle2) * (SpinRadius / 2)));
    int b1 = (vSpin - (cos(SpinAngle2) * (SpinRadius / 2)))/2;
    int c1 = (hSpin - (sin(SpinAngle2) * (SpinRadius / 2)));
    int d1 = (vSpin + (cos(SpinAngle2) * (SpinRadius / 2)))/2;

    int e = (hSpin + (sin(SpinAngle) * (SpinRadius / 2)));
    int f = (vSpin2 - (cos(SpinAngle) * (SpinRadius / 2)))/2;
    int g = (hSpin - (sin(SpinAngle) * (SpinRadius / 2)));
    int h = (vSpin2 + (cos(SpinAngle) * (SpinRadius / 2)))/2;

    int e1 = (hSpin + (sin(SpinAngle2) * (SpinRadius / 2)));
    int f1 = (vSpin2 - (cos(SpinAngle2) * (SpinRadius / 2)))/2;
    int g1 = (hSpin - (sin(SpinAngle2) * (SpinRadius / 2)));
    int h1 = (vSpin2 + (cos(SpinAngle2) * (SpinRadius / 2)))/2;
    
    M5.Lcd.drawLine(a,b,a1,b1,LINE_COLOR);
    M5.Lcd.drawLine(a1,b1,c,d,LINE_COLOR);
    M5.Lcd.drawLine(c,d,c1,d1,LINE_COLOR);
    M5.Lcd.drawLine(c1,d1,a,b,LINE_COLOR);

    M5.Lcd.drawLine(e,f,e1,f1,LINE_COLOR);
    M5.Lcd.drawLine(e1,f1,g,h,LINE_COLOR);
    M5.Lcd.drawLine(g,h,g1,h1,LINE_COLOR);
    M5.Lcd.drawLine(g1,h1,e,f,LINE_COLOR);
    
    M5.Lcd.drawLine(a,b,e,f,LINE_COLOR);
    M5.Lcd.drawLine(g,h,c,d,LINE_COLOR);
    M5.Lcd.drawLine(a1,b1,e1,f1,LINE_COLOR);
    M5.Lcd.drawLine(g1,h1,c1,d1,LINE_COLOR);

    M5.Lcd.display();                       
    delay(5);                               
  }
}