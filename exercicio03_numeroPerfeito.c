/*3.Fa�auma fun��o que verifique se um valor � perfeito ou nao. 
Um valor � dito perfeito quando ele � igual a soma dos seus divisores e
acentuando ele pr�prio. (Ex: 6 � perfeito, 6 = 1 + 2 + 3. que s�o seus divisores). 
A fun��o deve retornar um valor booleano.*/

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

