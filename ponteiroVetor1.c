#include <stdio.h>

int main(){

    int vet[4], i;
    int *p;
    
    p = vet;
    
    for(int i = 0; i < 4; i++){
        *p = 0;
        p++; // aumenta o indice em +1
    }

    for(int i = 0; i < 4; i++)
        printf("%d\n", vet[i]);
    
    return 0;
}
