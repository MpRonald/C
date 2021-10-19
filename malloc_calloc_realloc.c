#include <stdio.h>
#include <stdlib.h>

int main()
{
    // forçando um cast float para um numero inteiro;
    
    int num;
    float f;
    num = 10;
    
    f = (float)num / 7;
    printf("%.2f\n\n",f);
    
    // ------------------------------------------------------------ //
    printf("\n\nInicio malloc\n\n");
    // F U N Ç Ã O MALLOC()
    int *p;
    int a, i;
    
    /*aloca a numeros inteiros, p pode ser tradado como um vetor com posições*/
    p = (int *)malloc(a*sizeof(int));
    if(!p){
        printf("E R R O: memoria Insuficiente!");
        exit;
    }
    
    for(i = 0; i < a; i++) p[i] = i * i;
    
    printf("\nFinal malloc\n\n");
    // ------------------------------------------------------------ //
    printf("\n\nInicio calloc\n\n");
    // F U N Ç Ã O CALLOC()
    
    int *ptr;
    int b;
    int j;
    
    /*determina o valor de b em algum lugar*/
    /*aloca a numeros inteiros, p pode ser tradado como um vetor com posições*/
    
    ptr = (int *)calloc(b,sizeof(int));

    if(!ptr){
        printf("E R R O: memoria Insuficiente!");
        exit;
    }
    
    for(j = 0; j < b; j++) ptr[j] = j * j;
    
    printf("\nFinal calloc\n\n");     
    // ------------------------------------------------------------ //
    printf("\n\nInicio realloc\n\n");
    // F U N Ç Ã O REALLOC()
    
    a = 30; // variavel da parte do malloc();
  
    p = (int *)malloc(a*sizeof(int));
    if(!p){
        printf("E R R O: memoria Insuficiente!");
        exit;
    }
    
    for(i = 0; i < a; i++) 
    p[i] = i * i;
    
    // abaixo tamanho de p é modificado
    a = 100;
    p = realloc(p, a*sizeof(int));
    for(i = 0; i < a; i++)
    p[i] = a*i*(i-6);
    
    printf("\nFinal realloc\n\n");

    return 0;
}
