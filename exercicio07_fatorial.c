/*7.Faça uma função que receba um valor inteiro e posi vo e calcula o seu fatorial.*/

#include <stdio.h>

int fatorial();

int main()
{

    fatorial();
    return 0;

}

int fatorial(){
    
    int fat = 1, num, calc;
    
    printf("Insira um valor e veja seu fatorial: ");
    scanf("%d", &calc);
    
    for(fat; calc > 1; calc = calc - 1){
        fat = fat * calc;
    }
    
    printf("Fatorial: %d", fat);
}
