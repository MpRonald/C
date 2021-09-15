#include <stdio.h>


int main(){
    int a, *b, c;
    
    a = 2;
    b = &a;
    c = 10;
    
    printf("Valores iniciais das variaveis: \n");
    printf("valor de a: %d\n",a);
    printf("valor de b: %d\n",*b);
    printf("valor de c: %d",c);
   
    printf("\nDigite um numero interio para variavel ponteiro b: ");
    scanf("%d",&*b);
    
    
    printf("valor de a: %d\n",a);
    printf("valor de b: %d\n",*b);
    printf("valor de c: %d",c);
}