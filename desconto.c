
#include<stdio.h>
#include <ctype.h>

int main(){
    float valorASePagar=0.0, valorComDesconto =0.0;
    char nivel;
    
    printf("Valor a se pagar:");
    scanf("%f",&valorASePagar);
    fflush(stdin);
    
    printf("Digite seu nivel (A),(B) ou (C)");
    scanf("%c",&nivel);
    
    nivel = toupper(nivel);
    
    
    switch(nivel){
        case 'A':
        valorComDesconto = valorASePagar-(valorASePagar*0.2);
        printf(" Valor com desconto tipo A: %.2f",valorComDesconto);    
        break;
        
        case 'B':
        valorComDesconto=valorASePagar-(valorASePagar*0.15);
        printf(" Valor com desconto tipo B: %.2f",valorComDesconto);
        break;
        
        case 'C':
        valorComDesconto=valorASePagar-(valorASePagar*0.1);
        printf(" Valor com desconto tipo C: %.2f",valorComDesconto);
        break;
        
        default:
        printf("Opcao invalida");    
    }
    
    return 0;
}
