//Declaração das variáveis
int led1 = 13;
int led2 = 12;
int led3 = 11;
int ledAND = 7;
int ledOR = 6;
int ledNAND = 5;
int ledNOR = 4;
int ledXOR = 3;
int ledXNOR = 2;

//Declaração das funções
void funcaoAnd();
void funcaoOr();
void funcaoNAND();
void funcaoNOR();
void funcaoXOR();
void funcaoXNOR();

void setup()
{
  //Defini que os led são do tipo saída
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  //Chama a primeira função do ciclo
  funcaoAnd(); 
}

void funcaoAnd(){
  //Apaga o ultimo led do lopp
  digitalWrite(ledXNOR, 0);
  //Acende o led referente a tabela
  digitalWrite(ledAND, 1);
  //Loop estático para atender a quantidade de entradas  
  for(int i = 0; i < 4; i++){
    //Primeira possibilidade
      if(i == 0){
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
    }
    //Segunda possibilidade
    else if(i == 1){
      digitalWrite(led1, 0);
      digitalWrite(led2, 1);
      digitalWrite(led3, 0);
    }
    //Terceira possibilidade
    else if(i == 2){
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
    }
    //Quarta possibilidade
    else if(i == 3){
      digitalWrite(led1, 1);
      digitalWrite(led2, 1);
      digitalWrite(led3, 1);
    }
    //Delay para definir um intervalo entre as possibilidades dentro do for.
    delay(2000);
  }  
  
  //Chama a proxima função do ciclo
  funcaoOr();
}

void funcaoOr(){
  //Apaga o led da função anterior
  digitalWrite(ledAND, 0);
  //Acende o led referente a função do or
  digitalWrite(ledOR, 1);
  for(int i = 0; i < 4; i++){
      if(i == 0){
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
    }else if(i == 1){
      digitalWrite(led1, 0);
      digitalWrite(led2, 1);
      digitalWrite(led3, 1);
    }else if(i == 2){
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
      digitalWrite(led3, 1);
    }else if(i == 3){
       digitalWrite(led1, 1);
       digitalWrite(led2, 1);
       digitalWrite(led3, 1);
    }
    delay(2000);
  }
  funcaoNAND();
}

void funcaoNAND(){
  digitalWrite(ledOR, 0);
  digitalWrite(ledNAND, 1);
  
  for(int i = 0; i < 4; i++){
      if(i == 0){
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 1);
    }else if(i == 1){
      digitalWrite(led1, 0);
      digitalWrite(led2, 1);
      digitalWrite(led3, 1);
    }else if(i == 2){
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
      digitalWrite(led3, 1);
    }else if(i == 3){
       digitalWrite(led1, 1);
       digitalWrite(led2, 1);
       digitalWrite(led3, 0);
    }
    delay(2000);
  }  
 	
  funcaoNOR();
}

void funcaoNOR(){
  digitalWrite(ledNOR, 1);
  digitalWrite(ledNAND, 0);
  int e1;
  int e2;
  for(int i = 0; i < 4; i++){
      if(i == 0){
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 1);
    }else if(i == 1){
      digitalWrite(led1, 0);
      digitalWrite(led2, 1);
      digitalWrite(led3, 0);
    }else if(i == 2){
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
    }else if(i == 3){
       digitalWrite(led1, 1);
       digitalWrite(led2, 1);
       digitalWrite(led3, 0);
    }
    delay(2000);
  }  
  
  funcaoXOR();
}

void funcaoXOR(){
  digitalWrite(ledXOR, 1);
  digitalWrite(ledNOR, 0);
  
  int e1;
  int e2;
  for(int i = 0; i < 4; i++){
      if(i == 0){
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
    }else if(i == 1){
      digitalWrite(led1, 0);
      digitalWrite(led2, 1);
      digitalWrite(led3, 1);
    }else if(i == 2){
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
      digitalWrite(led3, 1);
    }else if(i == 3){
       digitalWrite(led1, 1);
       digitalWrite(led2, 1);
       digitalWrite(led3, 0);
    }
    delay(2000);
  } 
  
  funcaoXNOR();
}

void funcaoXNOR(){
  digitalWrite(ledXNOR, 1);
  digitalWrite(ledXOR, 0);
  int e1;
  int e2;
  for(int i = 0; i < 4; i++){
      if(i == 0){
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 1);
    }else if(i == 1){
      digitalWrite(led1, 0);
      digitalWrite(led2, 1);
      digitalWrite(led3, 0);
    }else if(i == 2){
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
    }else if(i == 3){
       digitalWrite(led1, 1);
       digitalWrite(led2, 1);
       digitalWrite(led3, 1);
    }
    delay(2000);
  }
  //Chama a primeira função, dessa forma eu consigo reiniciar o ciclo de funções
  funcaoAnd();
}