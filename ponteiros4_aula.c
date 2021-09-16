#include <stdio.h>

int main()
{
    long num;
    long *p;
    
    num = 55;
    p = &num;
    
    printf("Conteudo de p: %p\n", p);
    printf("Valor apontado por p: %ld\n", *p);
    printf("Conteudo de p incrementado: %p\n", ++p);
    printf("Valor apontado por p incrementado: %ld\n", *p);
    printf("Conteudo de p: %p\n", p);

    return 0;
}
