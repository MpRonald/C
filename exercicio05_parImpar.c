/*Fa�a uma fun��o que recebe um valor inteiro e verifica se o 
valor � par ou �mpar. A fun��o deve retornar um valor booleano.*/

#include<stdio.h>

int valor(int num);

int main(){
    
    int num, result;
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&num);
    
    result = valor(num);
    printf("%d", result);
    return 0;
}

int valor (int num){
    if(num % 2 == 0 && num != 0){
        printf("O n�mero � PAR!\n");
        return 1;
    } else if(num % 2 != 0){
        printf("O n�mero � IMPAR!\n");
        return 0;
    } else {
        printf("Voc� digitou ZERO!\n");
        return -1;
    }
}
