/*1. Fa�a uma fun��o que recebe por par�metro um valor inteiro e positivo e retorna o valor 
l�gico Verdadeiro caso o valor se a primo e Falso em caso contr�rio.*/

#include <stdio.h>

int numPrimo(int num);

int main(){
    
    int num;
    printf("Digite o numero: ");
    scanf("%d",&num);
    numPrimo(num);
    
    return 0;
}

int numPrimo(int num){
    int cont=0;
    for(int i=1; i<=num; i++)
        if(num%i == 0)
            cont++;
    if(cont == 2)
        printf("Veradeiro");
    else
        printf("Falso");
}
