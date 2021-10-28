#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

int main(){
    
    Lista *l = Cria_lista();
    Insere_elem(l, 10);
    //Insere_elem(l, 9);
    //Insere_elem(l, 8);
    Insere_elem(l, 7);
    //Insere_elem(l, 6);
    
    printf("Atualmente, existem %d elementos na lista\n\n", Tamanho_lista(l));
    //Imprime_lista(l);
    Remove_elem(l, 8);
    //Remove_elem_mov(l, 10);
    Imprime_lista(l);
    Libera_lista(l);
    
    
    return 0;
}