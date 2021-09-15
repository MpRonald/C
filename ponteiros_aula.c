#include <stdio.h>

int main()
{
    int num, valor;
    int *p;
    
    num = 55;
    
    p = &num; /*recebe o endereço de num*/
    valor = *p; /*valor é igualado a num de uma maneira indireta*/
    
    printf("Valor: %d\n", valor);
    printf("Endereço para onde o ponteiro aponta: %p\n", p);
    printf("Valor da variavel apontada: %d\n", *p);

    return 0;
}
