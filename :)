#include <stdio.h>

int main(void) {

  float notas[4][3];
  int repProva1=0, repProva2=0, repProva3=0;

  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      scanf("%f",&notas[i][j]);
    }
  }

  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      printf("%.2f -",notas[i][j]);
    }
    printf("\n");
  }

  for(int i=0;i<4;i++){
     if(notas[i][0]<5){
        repProva1++;
      }
      if(notas[i][1]<5){
        repProva2++;
      }
      if(notas[i][2]<5){
        repProva3++;
      }
  }

    printf("Reprovados Prova 1: %d",repProva1);
    printf("Reprovados Prova 2: %d",repProva2);
    printf("Reprovados Prova 3: %d",repProva3);




  return 0;
}
