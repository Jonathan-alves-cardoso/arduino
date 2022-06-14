
//Semafaró legal
//Declaração de variáveis
byte led1 = 12;
byte led2 = 10;
byte led3 = 8;
byte led4 = 4;
byte led5 = 2;
int botao = 6;
int estado = 0;
int tempo = 500;
  
  //Inicialização das variáveis 
  void setup() {
      pinMode(led1, OUTPUT); //Saída
      pinMode(led2, OUTPUT);
      pinMode(led3, OUTPUT);
      pinMode(led4, OUTPUT);
      pinMode(led5, OUTPUT);
      pinMode(botao, INPUT);
  }
  
//Execução
  void loop() {
      estado = digitalRead(botao);
      
    if (estado == HIGH) {
      digitalWrite(led4, 1);
      delay(tempo);
      digitalWrite(led4, 0);
      delay(tempo);
      
      digitalWrite(led5, 1);
      delay(tempo);
      digitalWrite(led5, 0);
      delay(tempo);
    }
    else {
      digitalWrite(led1, 1);
      delay(tempo);
      digitalWrite(led1, 0);
      delay(tempo);
      
      digitalWrite(led2, 1);
      delay(tempo);
      digitalWrite(led2, 0);
      delay(tempo);
      
      digitalWrite(led3, 1);
      delay(tempo);
      digitalWrite(led3, 0);
      delay(tempo);
    }
}
      