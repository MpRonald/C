#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

Lista* Cria_lista(void){
    Lista* pt = (Lista*)malloc(sizeof(Lista));
    if(pt != NULL)
        pt->Fl = 0;
    return pt;
}

int E_vazia(Lista* pt1){
    if(pt1->Fl == 0) 
        return 1;
    else return 0;
}

int E_cheia(Lista* pt1){
    if(pt1->Fl == MAX)
        return 1;
    else return 0;
}

Lista* Insere_elem(Lista* pt1, int elem){
    if(pt1 == NULL)
        return pt1;
    if(E_cheia(pt1)){
        printf("Lista cheia\n");
        return pt1;
    }
    
    //insere elemento no final da Lista
    pt1->dados[pt1->Fl] = elem;
    pt1->Fl++;
    return pt1;
}

Lista* Remove_elem(Lista* pt1, int elem){
    
    int i, k;
    if(pt1 != NULL){
        if(E_vazia(pt1)){
            printf("Lista vazia!\n");
            return pt1;
        }
        
        // procura elemtno na lista
        i = 0;
        while(i < pt1->Fl && pt1->dados[i] != elem)
            i++;
        if(i == pt1->Fl)
            return pt1;
        /*lista vazia ou elemento nao encontrado
        elemento encontrado na posiçao i,
        remover elemento sem movimentaçao de dados*/
         
        pt1->dados[i] = pt1->dados[pt1->Fl -1];
        //atualiza fim de lista
        pt1->Fl--;
    } return pt1;
}

Lista* Remove_elem_mov(Lista* pt1, int elem){
    int i, k;
    if(pt1 == NULL) 
        return pt1;
    if(E_vazia(pt1)){
        printf("Lista vazia!\n");
        return pt1;
    }
    
    // procura elemento na lista
    i = 0;
    while(i < pt1->Fl && pt1->dados[i] != elem)
        i++;
    
    if(i == pt1->Fl) // elemento nao encontrado
        return pt1;
        
    /*elemento encontrado na posiçao i,
    remover elemento com movimentaçao de dados*/
    
    for(k = i; k < pt1->Fl; k++)
        pt1->dados[k] = pt1->dados[k + 1];
    
    // atualiza fim da lista
    pt1->Fl--;
    return pt1;
}

int Consulta_no(Lista* pt1, int pos, int* info){
    if(pos <= 0 || pos > pt1->Fl)
        return 0;
    
    *info= pt1->dados[pos -1];
        return 1;
}

int Tamanho_lista(Lista* pt1){
    if(pt1 == NULL)
        return -1;
    else
        return pt1->Fl;
}

void Imprime_lista(Lista* pt1){
    
    if(E_vazia(pt1)){
        printf("Lista vazia, não há elementos para imprimir!\n");
    } else {
        int i;
        printf("Lista: \" ");
        for(i = 0; i < pt1->Fl; i++)
            printf("%i ", pt1->dados[i]);
        printf("\"\n");
    }
}

Lista* Libera_lista(Lista* pt1){
    free(pt1);
    return NULL;
}






















