int SToe      = A0;
int SLateral  = A1;
int SBall     = A2;
int SHeel     = A3;
int MFront    = 5;
int MLateral  = 6;
int MMedial   = 10;
int MBack     = 11;
int Button    = 2;
char SerialIn = 0;
// volatile int something to calibrate

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(5,  OUTPUT);
  pinMode(6,  OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2,  OUTPUT);
  attachInterrupt(digitalPinToInterrupt(Button), Calibrate, RISING);
}

void loop() {
  if(Serial.available() > 0){
    
  }
}

void Calibrate(){
  
}
