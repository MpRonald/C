#include <stdio.h>

int main(){

    float fpi = 3.1415, *pf, **ppf;
    
    pf = &fpi; /*pf armazena o endereço de fpi*/
    ppf = &pf; /*ppf armazena o endereço de pf*/
    
    printf("Valor ppf: %.4f\n", **ppf); /*imprime o valor de fpi*/
    printf("Valor de pf: %.4f\n", *pf); /*Tambem imprime o valor de fpi*/
    
    return 0;
}
