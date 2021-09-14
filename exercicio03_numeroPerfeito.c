/*3.Façauma função que verifique se um valor é perfeito ou nao. 
Um valor é dito perfeito quando ele é igual a soma dos seus divisores e
acentuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3. que sáo seus divisores). 
A função deve retornar um valor booleano.*/

#include <stdio.h>
int numPerfeito(int num);
int main(){
    
    int num, soma;
    
    printf("Digite o numero: ");
    scanf("%d",&num);
    
    soma = numPerfeito(num);
    printf("%d", soma);
    
return 0;
}

int numPerfeito(int num){
    int soma;
    
    for(int i = 1; i < num; i++){
        if (num%i == 0) {
            soma=soma+i;
        }
    }
    if (num == soma) return 1;
    else return 0;
    
}

