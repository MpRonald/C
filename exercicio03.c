#include <stdio.h>

int somaPonteiro();

int main(){
  
    somaPonteiro();
    
    return 0;
}

int somaPonteiro(){
    
    int num1, num2, *p;
    
    printf("Digite o primeiro valor: ");
    scanf("%d",&num1);
    
    printf("Digite o segundo valor: ");
    scanf("%d",&num2);
    
    p = &num1; 
    *p = num1 + num2;
    
    printf("A soma dos valores é: : %d\n", *p);
}