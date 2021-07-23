// pin variables
int SToe      = A0;
int SLateral  = A1;
int SBall     = A2;
int SHeel     = A4;
int MFront    = 5;     // MFront receives the feedback from SToe
int MLateral  = 3;     // MLateral receives the feedack from SLateral
int MMedial   = 9;    // MMedial receives the feedback from SBall
int MBack     = 11;    // MBack receives the feedback fromt SHeel

// calibration variables
int VToe      = 0;     // value of SToe
int VLateral  = 0;     // value of SLateral
int VBall     = 0;     // value of SBall
int VHeel     = 0;     // value of SHeel
int SMin      = 1023;  // minimum sensor value
int SMax      = 300;   // maximum sensor value

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(3,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(9,  OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  VToe = analogRead(SToe);
  VLateral = analogRead(SLateral);
  VBall = analogRead(SBall);
  VHeel = analogRead(SHeel);

  VToe = map(VToe, SMin, SMax, 0, 255);
  VLateral = map(VLateral, SMin, SMax, 0, 255);
  VBall = map(VBall, SMin, SMax, 0, 255);
  VHeel = map(VHeel, SMin, SMax, 0, 255);

  Serial.print(VToe);
  Serial. print('\n');
  
  analogWrite(MFront, VToe);
  analogWrite(MLateral, VLateral);
  analogWrite(MMedial, VBall);
  analogWrite(MBack, VHeel);

}
