#include <stdio.h>

int main()
{
    int num, *p1, *p2;
    
    num = 55;
    
    p1 = &num; /*pega o valor de num*/
    p2 = p1; /* p2 passa a apontar para o mesmo enredeço apontado por p1 */
    
    printf("Conteúdo de p1: %p\n", p1);
    printf("Valor apontado por p1: %d\n", *p1);
    printf("Conteúdo de p2: %p\n", p2);
    printf("Valor apontado por p2: %d\n", *p2);

    return 0;
}
