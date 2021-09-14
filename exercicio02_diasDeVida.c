/*2.Fa�a uma fun��o que recebe a idade de uma pessoa em anos meses 
e dias e retorna essa idade expressa em dias.*/

#include <stdio.h>

int soma(int anos, int meses, int dias);

int main(){
    
    int anos, meses, dias, result;
    
    printf("Digite sua idade em anos: ");
    scanf("%d",&anos);
    
    printf("Digite o número de meses corridos após seu último aniversário: ");
    scanf("%d",&meses);
    
    printf("Digite o dia do mês atual: ");
    scanf("%d",&dias);
    
    result = soma(anos, meses, dias);
    printf("Você tem %d dias de vida." , result);
    
    return 0;
}

int soma(int anos, int meses, int dias){
    int soma;
    return soma = (anos * 365) + (meses * 30) + dias;
}
