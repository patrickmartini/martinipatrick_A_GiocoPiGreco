#include <LiquidCrystal.h>

int btnInizio = 6;
int btn1 = 1;
int btn2 = 2;
int btn3 = 3;
int btn4 = 4;
int btn5 = 5;
int tempo = 2000;
int vite = 3;
int punti = 0;
LiquidCrystal lcd(13,12,11,10,9,8);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(btnInizio,INPUT);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(btn4,INPUT);
  pinMode(btn5,INPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(bottoneI == HIGH))
  {
    
    newGame();
    
  }
  

}

void newGame()
{
  lcd.setCursor(1,0);
  lcd.print("Vite: "+ Vite);
  while (Vite>0){
  int pos = random(1,5);
  lcd.setCursor(0,pos);
  lcd.print("л");
  for(int i=0;i<tempo;i++)
  {
    if(digitalRead(pos) == HIGH)
    {
      punti++;
      iniziaGioco();
    }
  }
  vite--;
  newGame();
  }
}
