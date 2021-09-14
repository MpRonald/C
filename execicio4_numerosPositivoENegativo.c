/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    if(num > 0){
        printf("O número é positivo!\n");
        return 1;
    } else if(num < 0){
        printf("O número é negativo!\n");
        return 0;
    } else {
        printf("Você digitou zero!\n");
        return -1;
    }
}