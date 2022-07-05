int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
char one;
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
    if(Serial.available()){
        one = Serial.read();
        Serial.println(one);
    }

  if (one == 'a'){
    digitalWrite(a, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    
    }
  if (one == 'b'){
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    
    }
  if (one == 'c'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);  
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);  
    }  
  if (one == 'd'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(d, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(d, LOW);
    }
  if (one == 'e'){
    digitalWrite(a, HIGH);
    digitalWrite(d, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(d, LOW);
    }
  if (one == 'f'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    }
  if (one == 'g'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    }  
  if (one == 'h'){
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    }
  if (one == 'í'){
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    delay(2000);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    }
  if (one == 'j'){
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    delay(2000);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    }
  if (one == 'k'){
    digitalWrite(a, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(e, LOW);
    }  
  if (one == 'l'){
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(e, LOW);
    }
  if (one == 'm'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(e, LOW);
    }
  if (one == 'n'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    }
  if (one == 'o'){
    digitalWrite(a, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    }  
  if (one == 'p'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(e, LOW);
    }
  if (one == 'q'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    }
  if (one == 'r'){
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    }
  if (one == 's'){
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(e, LOW);
    }  
  if (one == 't'){
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    delay(2000);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    }
  if (one == 'u'){
    digitalWrite(a, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    }
  if (one == 'v'){
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    }
  if (one == 'w'){
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(f, HIGH);
    delay(2000);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(f, LOW);
    }  
  if (one == 'x'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    }
  if (one == 'y'){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    }  
  if (one == 'z'){
    digitalWrite(a, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    delay(2000);
    digitalWrite(a, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    }




}
