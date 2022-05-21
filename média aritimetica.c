#include <stdio.h>

float calculaNotas(float n1, float n2, float n3, float n4){
  float result;

  result = (n1+n2+n3+n4)/4;

  return result;
}

int main(void) {

  float n1,n2,n3,n4,resultado;

  printf("Digite a nota");
  scanf("%f",&n1);

  printf("Digite a nota");
  scanf("%f",&n2);

  printf("Digite a nota");
  scanf("%f",&n3);

  printf("Digite a nota");
  scanf("%f",&n4);

  resultado=calculaNotas(n1,n2,n3,n4);

  printf("Media artimetica: %.2f",resultado);

  return 0;
}
