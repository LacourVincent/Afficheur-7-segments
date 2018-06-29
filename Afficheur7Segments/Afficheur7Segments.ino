/**
   @brief : Contrôle de la valeur d'un afficheur 7 segments à partir d'un potentiometre
   @author : LACOUR Vincent
   @date : 02/2018
*/

/* Broches des différents segments de l'afficheur */
const byte PIN_SEGMENT_A = 2;
const byte PIN_SEGMENT_B = 3;
const byte PIN_SEGMENT_C = 4;
const byte PIN_SEGMENT_D = 5;
const byte PIN_SEGMENT_E = 6;
const byte PIN_SEGMENT_F = 7;
const byte PIN_SEGMENT_G = 8;

int potPin = 2;  // select the input pin for the potentiometer
int valeur_pot = 0;  // variable to store the value coming from the sensor [0 - 1023]

void setup() {
  Serial.begin(9600);
  pinMode(PIN_SEGMENT_A, OUTPUT);
  pinMode(PIN_SEGMENT_B, OUTPUT);
  pinMode(PIN_SEGMENT_C, OUTPUT);
  pinMode(PIN_SEGMENT_D, OUTPUT);
  pinMode(PIN_SEGMENT_E, OUTPUT);
  pinMode(PIN_SEGMENT_F, OUTPUT);
  pinMode(PIN_SEGMENT_G, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valeur_pot = analogRead(potPin);    // read the value from the potentiometre
  if ((valeur_pot >= 0) and (valeur_pot <= 100)) {
    draw_zero();
  }
  else if ((valeur_pot >= 101) and (valeur_pot <= 200)) {
    draw_one();
  }
  else if ((valeur_pot >= 201) and (valeur_pot <= 300)) {
    draw_two();
  }
  else if ((valeur_pot >= 301) and (valeur_pot <= 400)) {
    draw_three();
  }
  else if ((valeur_pot >= 401) and (valeur_pot <= 500)) {
    draw_four();
  }
  else if ((valeur_pot >= 501) and (valeur_pot <= 600)) {
    draw_five();
  }
  else if ((valeur_pot >= 601) and (valeur_pot <= 700)) {
    draw_six();
  }
  else if ((valeur_pot >= 701) and (valeur_pot <= 800)) {
    draw_seven();
  }
  else if ((valeur_pot >= 801) and (valeur_pot <= 900)) {
    draw_eight();
  }
  else if ((valeur_pot >= 901) and (valeur_pot <= 1024)) {
    draw_nine();
  }
  delay(50);
}

void draw_zero() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, HIGH);
  digitalWrite(PIN_SEGMENT_E, HIGH);
  digitalWrite(PIN_SEGMENT_F, HIGH);
  digitalWrite(PIN_SEGMENT_G, LOW);
}

void draw_one() {
  digitalWrite(PIN_SEGMENT_A, LOW);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, LOW);
  digitalWrite(PIN_SEGMENT_E, LOW);
  digitalWrite(PIN_SEGMENT_F, LOW);
  digitalWrite(PIN_SEGMENT_G, LOW);
}

void draw_two() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, LOW);
  digitalWrite(PIN_SEGMENT_D, HIGH);
  digitalWrite(PIN_SEGMENT_E, HIGH);
  digitalWrite(PIN_SEGMENT_F, LOW);
  digitalWrite(PIN_SEGMENT_G, HIGH);
}

void draw_three() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, HIGH);
  digitalWrite(PIN_SEGMENT_E, LOW);
  digitalWrite(PIN_SEGMENT_F, LOW);
  digitalWrite(PIN_SEGMENT_G, HIGH);
}

void draw_four() {
  digitalWrite(PIN_SEGMENT_A, LOW);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, LOW);
  digitalWrite(PIN_SEGMENT_E, LOW);
  digitalWrite(PIN_SEGMENT_F, HIGH);
  digitalWrite(PIN_SEGMENT_G, HIGH);
}

void draw_five() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, LOW);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, HIGH);
  digitalWrite(PIN_SEGMENT_E, LOW);
  digitalWrite(PIN_SEGMENT_F, HIGH);
  digitalWrite(PIN_SEGMENT_G, HIGH);
}

void draw_six() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, LOW);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, HIGH);
  digitalWrite(PIN_SEGMENT_E, HIGH);
  digitalWrite(PIN_SEGMENT_F, HIGH);
  digitalWrite(PIN_SEGMENT_G, HIGH);
}

void draw_seven() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, LOW);
  digitalWrite(PIN_SEGMENT_E, LOW);
  digitalWrite(PIN_SEGMENT_F, LOW);
  digitalWrite(PIN_SEGMENT_G, LOW);
}

void draw_eight() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, HIGH);
  digitalWrite(PIN_SEGMENT_E, HIGH);
  digitalWrite(PIN_SEGMENT_F, HIGH);
  digitalWrite(PIN_SEGMENT_G, HIGH);
}

void draw_nine() {
  digitalWrite(PIN_SEGMENT_A, HIGH);
  digitalWrite(PIN_SEGMENT_B, HIGH);
  digitalWrite(PIN_SEGMENT_C, HIGH);
  digitalWrite(PIN_SEGMENT_D, HIGH);
  digitalWrite(PIN_SEGMENT_E, LOW);
  digitalWrite(PIN_SEGMENT_F, HIGH);
  digitalWrite(PIN_SEGMENT_G, HIGH);
}



