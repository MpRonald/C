#include<stdio.h>
#include<stdlib.h>

int main(void){
  
  int qtd, *ptr;
  
  printf("Informe o numero de numeros para cadastrar: \n");
  scanf("%d", &qtd);
  
  ptr = (int*)malloc(qtd * sizeof(int));
  
  int i;
  for (i = 1; i <= qtd; i++){
    printf("Informe o numero do telefone %d: \n", i);
    scanf("%d", &ptr[i]);
  }
  
  int j;
  for (j = 1; j <= qtd; j++){
    printf("O telefone numero %d e: %d \n", j, ptr[j]);
  }
  
  printf("Os numeros ocupam %d bytes de memoria.", qtd * sizeof(int));
  
  // desalocar memoria
  free(ptr);
  ptr = NULL;; // medida de segurança

  return(0);
}
