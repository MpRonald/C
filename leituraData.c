/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
