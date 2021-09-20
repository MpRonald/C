#include <stdio.h>

int dobro();

int main(){
  
    dobro();
    
    return 0;
}

int dobro(){
    
    int num1, *p;
    
    printf("Digite o  valor: ");
    scanf("%d",&num1);
    
    p = &num1; 
    *p = num1 * 2;
    
    printf("O dobro do valor é: %d\n", *p);
}