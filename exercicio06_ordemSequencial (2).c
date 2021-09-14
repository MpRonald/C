

#include <stdio.h>

int sequencial();

int main()
{
    
    sequencial();
    return 0;
}

int sequencial(){
    
    int num[3];
    int min=0, max=0, med=0, i = 0;
    
    for(i; i < 3; i++){
        printf("Digite o numero: ");
        scanf("%d",&num[i]);
        if(num[i] > min && num[i] < med){
            min = num[i];
        } else if (num[i] > min && num[i] < max){
            min = med;
            med = num[i];
        } else if (num[i] > min && num[i] > med){
            min = med;
            med = max;
            max = num[i];
        }
    }
    
    printf("A ordem sequencial é: %d %d %d", min, med, max);
    
}
