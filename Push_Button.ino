
int pushButton = 3;
int Led = 13;
int pushButtonStatus;

void setup() {

pinMode(pushButton, INPUT);

pinMode(Led, OUTPUT);

}

void loop() {

pushButtonStatus= digitalRead(pushButton);

if(pushButtonStatus == 1){

digitalWrite(Led, HIGH);

}else{

digitalWrite(Led, LOW);

}

}
