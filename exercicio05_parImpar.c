/*Faça uma função que recebe um valor inteiro e verifica se o 
valor é par ou ímpar. A funçào deve retornar um valor booleano.*/

#include<stdio.h>

int valor(int num);

int main(){
    
    int num, result;
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    
    result = valor(num);
    printf("%d", result);
    return 0;
}

int valor (int num){
    if(num % 2 == 0 && num != 0){
        printf("O número é PAR!\n");
        return 1;
    } else if(num % 2 != 0){
        printf("O número é IMPAR!\n");
        return 0;
    } else {
        printf("Você digitou ZERO!\n");
        return -1;
    }
}
