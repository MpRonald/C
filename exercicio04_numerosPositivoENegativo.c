/*4.Fa�a uma fun��o que recebe um valor inteiro e verifica 
se o valor � positivo ou negativo. A fun��o deve retornar um valor booleano.*/

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
    if(num > 0){
        printf("O n�mero � positivo!\n");
        return 1;
    } else if(num < 0){
        printf("O n�mero � negativo!\n");
        return 0;
    } else {
        printf("Voc� digitou zero!\n");
        return -1;
    }
}
