#include <stdio.h>

int ponteiro();

int main()
{
    
    
    ponteiro();
    
    return 0;
}

int ponteiro(){
    
    int num1, num2, *ptr;
    
    printf("Digite um valor para num1: ");
    scanf("%d",&num1);
    
    ptr = &num1; 
    num2 = *ptr; 
    
    printf("Valor de num1: %d\n", num1);
    printf("Valor de num2: %d\n", num2);
    
}