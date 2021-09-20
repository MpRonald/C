#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *fracao);

int main()
{
    float num, fracao;
    int inteiro;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fracao);

    printf("%.2f: %i e %.2f", num, inteiro, fracao);

    return 0;
}


void frac(float num, int *inteiro, float *fracao) {
    
    *inteiro = num;
    *fracao = num - *inteiro;
    
}