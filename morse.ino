volatile char serialInput;
int dot = 125;
int dash = 375;

// delay w literze 1 dot
// delay między literami 3 dot
// delay między słowami 7 dot

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
    serialInput = Serial.read();
    switch(serialInput){
      case 'a' :   morse(".-");
                   break;
      case 'b' :   morse("-...");
                   break;
      case 'c' :   morse("-.-.");
                   break;
      case 'd' :   morse("-..");
                   break;
      case 'e' :   morse(".");
                   break;
      case 'f' :   morse("..-.");
                   break;
      case 'g' :   morse("--.");
                   break;
      case 'h' :   morse("....");
                   break;
      case 'i' :   morse("..");
                   break;
      case 'j' :   morse(".---");
                   break;
      case 'k' :   morse("-.-");
                   break;
      case 'l' :   morse(".-..");
                   break;
      case 'm' :   morse("--");
                   break;
      case 'n' :   morse("-.");
                   break;
      case 'o' :   morse("---");
                   break;
      case 'p' :   morse(".--.");
                   break;
      case 'q' :   morse("--.-");
                   break;
      case 'r' :   morse(".-.");
                   break;
      case 's' :   morse("...");
                   break;
      case 't' :   morse("-");
                   break;
      case 'u' :   morse("..-");
                   break;
      case 'v' :   morse("...-");
                   break;
      case 'w' :   morse(".--");
                   break;
      case 'x' :   morse("-..-");
                   break;
      case 'y' :   morse("-.--");
                   break;
      case 'z' :   morse("--..");
                   break;
      case ' ' :   delay(4*dot);
    }
  }  

}

void blink(int time){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot);
}

void morse(String letter) {
  for(int i = 0; i < letter.length(); i++) {
    if(letter[i] == '-') {
      blink(dash);
    } else if (letter[i] == '.') {
      blink(dot);
    }
  }
  delay(2*dot);
}
