#include<stdio.h>

void letrasIguais(char nome1[],int primNome, char nome2[], int segNome){
       int i,j,h,count=0,contrepeticao=0, flagEntradaDaComparacao=1;
       
    for(i=0;i<primNome;i++){
            
          for(h=0;h<i;h++){
                if(nome1[i]==nome1[h]){
                    flagEntradaDaComparacao=0;
          }
        }    
           
            if(flagEntradaDaComparacao==1){
           for(j=0;j<segNome;j++){
                  if(nome1[i]==nome2[j]){
                       contrepeticao++;
              }
           }
           if(contrepeticao>0){
               count++;
               contrepeticao=0;
           }
        }       
    }
    
    printf("%d",count);
    
}

int main(void){
    char nome1[]={"jjjj"};
    char nome2[]={"jjjj"};
    
    letrasIguais(nome1,4,nome2,4);

    return 0;
}
