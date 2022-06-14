//Declaração das variáveis
byte lamp[] = {2, 3, 4};
int sensor = A1;
float temp = 0;
float temp2 = 0;

//Inicialização das variáveis
void setup() {
  for (int i = 0; i <= sizeof(leds); i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode (sensor, INPUT);
  //analogReference(INTERNAL);
  Serial.begin(9600);
}

//Execução
void loop() {
  temp2 = analogRead(sensor);
  float tensao = 5 * temp2;
  tensao = tensao / 1024;
  temp = (tensao - 0.5) * 100;
  
  Serial.print("temperatura");
  Serial.print(temp);
  Serial.println("   C");
  
  if (temp >= -40 && temp <=20) {
    digitalWrite(leds[0], 1);
    digitalWrite(leds[1], 1);
    digitalWrite(leds[2], 1);
  }
 
  else {
    digitalWrite(leds[0], 0);
    digitalWrite(leds[1], 0);
    digitalWrite(leds[2], 0);
  }
  if (temp >= 21 && temp <=60) {
    digitalWrite(leds[3], 1);
    digitalWrite(leds[4], 1);
  }
  
   else {
    digitalWrite(leds[3], 0);
    digitalWrite(leds[4], 0);
  }
  
  if (temp >= 61 && temp <=100) {
    digitalWrite(leds[5], 1);
    digitalWrite(leds[6], 1);
    digitalWrite(leds[7], 1);
  }
  
   else {
    digitalWrite(leds[5], 0);
    digitalWrite(leds[6], 0);
    digitalWrite(leds[7], 0);
  }
  
     
    
  }