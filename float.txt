#include <stdio.h>

float calculaNotas(int tamVetor,float vet[]){
  float result;
  
  for(int j=0;j<tamVetor;j++){
    result = result+ vet[j];
  }

   result = result/4;

  return result;
}

int main(void) {

  float resultado;
  float notas[4];

 for(int i=0;i<4;i++){
   printf("Digite a nota");
   scanf("%f",&notas[i]);
  }
  
  resultado=calculaNotas(4,notas);

  printf("Media artimetica: %.2f",resultado);

  return 0;
}
