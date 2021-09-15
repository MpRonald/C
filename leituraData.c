
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dia, mes, ano;
    
    printf("Digite sua data de nascimento no seguinte formato dd/mm/aaaa\n");
    scanf("%d/%d/%d", &dia,&mes,&ano);
    printf("Você nasceu no dia %d do mês %d do ano de %d",dia,mes,ano);

    return 0;
}
