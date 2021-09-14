/*9.Escreva uma função que recebe por parâmetro, um valor inteiro e 
positivo e retorna o somatório desse valor.*/

#include<stdio.h>

int soma(int num);

int main(){
    
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d",&numero);
    printf("A soma é: %d", soma(numero));

return 0;

}

int soma(int num){
    
	int numSoma;
    return numSoma = num + num;
}
