#include <stdio.h>

int main(){
    
    int valor1, valor2, *ptr1, *ptr2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d",&valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%d",&valor2);
    
    printf("Primeiro valor: %d", valor1);
    printf("\nSegundo valor: %d", valor2);
    
    ptr1 = &valor1;
    ptr2 = &valor2;
    
    printf("\nEndereço de memória de %d: %p", valor1, &valor1);
    printf("\nEndereço de memória do %d: %p", valor2, &valor2);
   
    if(&valor1 > &valor2){
        printf("\n\nA variavel com valor %d com endereço %p tem maior endereço de memória.", valor1, &valor1);
    } else {
        printf("\n\nA variavel com valor %d com endereço %p tem maior endereço de memória.", valor2, &valor2);
    }
    return 0;
}

