#include <stdio.h>

void main(){

    struct ficha_de_aluno{
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    };
    
    struct ficha_de_aluno aluno;
    
    printf("\n-------------- Cadastro de Aluno --------------\n\n");
    printf("Nome do aluno .....: ");
    fgets(aluno.nome, 50, stdin);
    printf("Disciplina ........: ");
    fgets(aluno.disciplina, 30, stdin);
    
    printf("Informe a 1a. nota.: ");
    scanf("%f",&aluno.nota_prova1);
    
    printf("Informe a 2a. nota.: ");
    scanf("%f",&aluno.nota_prova2);
    
    printf("\n-------------- Lendo os dados da struct----------\n\n");
    printf("Nome .................: %s", aluno.nome);
    printf("Disciplina ...........: %s", aluno.disciplina);
    printf("Nota da Prova 1 ......: %.2f\n", aluno.nota_prova1);
    printf("Nota da Prova 2 ......: %.2f\n", aluno.nota_prova2);
    
}
