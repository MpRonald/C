/*9.Escreva uma fun��o que recebe por par�metro, um valor inteiro e 
positivo e retorna o somat�rio desse valor.*/

#include<stdio.h>

int soma(int num);

int main(){
    
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d",&numero);
    printf("A soma �: %d", soma(numero));

return 0;

}

int soma(int num){
    
	int numSoma;
    return numSoma = num + num;
}
