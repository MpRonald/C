#include <stdio.h>

float ponteiro();

int main(){
    
    ponteiro();
    
    return 0;
}

float ponteiro(){
    
    float num, *ptr;
    
    printf("Digite um valor: ");
    scanf("%f",&num);
    
    ptr = &num;
    
    printf("\nValor referenciado pelo ponteiro: %.2f", *ptr);
}