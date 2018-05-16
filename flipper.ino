#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

// configuration
int maxPlayerCount = 3;
int maxBallCount = 3;

// sensors
int ballSensor = 50;
int bumperSensor1 = 51;
int startSensor = 52;

// inputs
int pullupInputs[] = {ballSensor, bumperSensor1, startSensor};

// outputs
int ballContact = 48;

// lights
int lights[] = {3,4,5,6,7,8,9,10,11};

// vars
int playerStats[3][2] = {{0,0},{0,0},{0,0}};
int currentPlayerID = 0;
bool inGame = true;

// array lenghts
int lightsCount = sizeof(lights)/sizeof(int);
int inputPullupCount = sizeof(pullupInputs)/sizeof(int);

void setup() {
  // initialize serial output
  Serial.begin(9600);
  
  // initialize the LCD
  lcd.begin();

  // setup lights
  for(int i = 0; i < lightsCount; i++) {
    pinMode(lights[i], OUTPUT);
  }
  // setup pullup Inputs
  for(int i = 0; i < inputPullupCount; i++) {
    pinMode(pullupInputs[i], INPUT_PULLUP);
  }
  
  pinMode(ballContact, OUTPUT);

  outputPlayerCount();
  attractMode();
}

void loop() {
  while (inGame) {
    
    if (digitalRead(ballSensor) == LOW) {
      ejectBall();
      outputPlayerCount();
    }

    if(digitalRead(bumperSensor1) == LOW) {
      playerStats[currentPlayerID][0] = playerStats[currentPlayerID][0] + 1;
      outputPlayerCount();
    }
    //if(digitalRead(startSensor) == HIGH) {
      //attractMode();
    //}
  
  }
  attractMode();
  endGame();
}

void outputPlayerCount() {
  lcd.clear();
  int currentPoints = playerStats[currentPlayerID][0] / 10;
  String s = "Player " + (String)(currentPlayerID + 1) + ": " + (String)currentPoints;
  lcd.print(s);
  Serial.println(s);
  s = "Ball " + (String)(playerStats[currentPlayerID][1] + 1) + " of " + (String)maxBallCount;
  lcd.setCursor(0, 1);
  lcd.print(s);
  lcd.home();
}

void ejectBall() {
  // count how many balls have been back
  playerStats[currentPlayerID][1] = playerStats[currentPlayerID][1] + 1;
  if(playerStats[maxPlayerCount - 1][1] >= maxBallCount) {
    endGame();
    //inGame = false;
  }
  digitalWrite(ballContact, HIGH);
  delay(300);
  digitalWrite(ballContact, LOW);
  delay(300);
  //points = 0;
  // count balls
  if(currentPlayerID < 2) {
    currentPlayerID++;
  } else {
    currentPlayerID = 0;
  }
}

void endGame() {
  String s = "1: " + (String)playerStats[0][0] + " 2:" + (String)playerStats[1][0] + " 3:" + (String)playerStats[2][0];
  lcd.print(s);
}

void attractMode() {
  for(int i = 0; i < lightsCount; i++) {
    digitalWrite(lights[i], HIGH);
    delay(200);
    digitalWrite(lights[i], LOW);
  }
}
