#include<stdio.h>
#include <ctype.h>

int aprovadosReprovados(float vet[], int tam,int opcao){
    int i,count=0;
    
    switch(opcao){
        case 1:
          for(i=0;i<tam;i++){
            if(vet[i]<5){
              count++;    
            }
        }
        return count;
        break;
        case 2:
        for(i=0;i<tam;i++){
            if(vet[i]>5){
              count++;    
            }
        }
        return count;
        break;    
        
        default:
        printf("Opcao invalida");
        return -1;
    }
}

int main(){
    
    float notas[5];
    int i,resultado=0,opcaoEscolhida;
    
    for(i=0;i<5;i++){
        printf("Digite a nota %d\n",i+1);
        scanf("%f",&notas[i]);
    }
    
    printf("Digite a opcao desejada\n(1)Alunos reprovados\n(2)Alunos aprovados\nResposta: ");
    scanf("%d",&opcaoEscolhida);
    
    resultado = aprovadosReprovados(notas,5,opcaoEscolhida);
    
    if(opcaoEscolhida == 1){
        printf("Alunos reprovados = %d",resultado);
    }else{
       if(opcaoEscolhida == 2){
        printf("Alunos aprovados = %d",resultado);
       }
    }
    
    return 0;
}
