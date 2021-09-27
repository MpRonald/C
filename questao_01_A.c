/*
Definir uma estrutura para armazenar as informações de um determinado produto. 
A estrutura deve conter o nome do produto (até 15 caracteres) e o preço do 
produto (real). Faça um programa para ler as duas informações e imprimi-las.
*/


#include <stdio.h>

void main(){
    
    struct produto{
        char nome[15];
        float preco;
    };
    
    struct produto p;
    
    printf("---------- Consulta Produto ----------\n");
    
    printf("Digite o nome do produto: ");
    fgets(p.nome, 15, stdin);
    
    printf("Digite o preço do produto R$: ");
    scanf("%f",&p.preco);
    
    printf(" ---------- Produto ----------\n");
    printf("Produto: %sPreço: R$ %.2f", p.nome, p.preco);
    
    
    

}