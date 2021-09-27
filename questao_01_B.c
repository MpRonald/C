/*
Definir uma estrutura para conter a avaliação de um aluno na disciplina de ED. 
A estrutura deve conter a matrícula do aluno (até 10 caracteres), 
o nome do aluno (até 40 caracteres) e três notas. Faça um programa para ler 
as informações e mostrá-las juntamente com um aviso sobre a situação do aluno 
(APROVADO, REPROVADO ou DEPENDÊNCIA).
*/

#include <stdio.h>

void main() {
    struct avaliacao_aluno {
        char nome[40];
        char matricula[10];
        float nota1;
        float nota2;
        float nota3;
        float media;
};

struct avaliacao_aluno aluno;
    
    printf("\n---------- Sistema de Avaliação -----------\n\n\n");
    
    printf("Nome do aluno ......: ");
    fgets(aluno.nome, 40, stdin);
    
    printf("Matrícula: ");
    fgets(aluno.matricula, 10, stdin);
    
    printf("Informe a 1a. nota: ");
    scanf("%f", &aluno.nota1);
    
    printf("Informe a 2a. nota: ");
    scanf("%f", &aluno.nota2);
    
    printf("Informe a 3a. nota: ");
    scanf("%f", &aluno.nota3);
    
    aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
    
    printf("\n\n --------- Situação do Aluno ---------\n\n");
    printf("Nome ....: %s", aluno.nome);
    printf("Matrícula: %s", aluno.matricula);
    printf("Nota 1: %.2f\n" , aluno.nota1);
    printf("Nota 2: %.2f\n" , aluno.nota2);
    printf("Nota 3: %.2f\n" , aluno.nota3);
    printf("Média final: %.2f\n", aluno.media);
    
    if(aluno.media >= 6.0){
        printf("Situação do Aluno: APROVADO");
    } else if(aluno.media < 6.0 && aluno.media >= 4.0){
        printf("Situação do Aluno: DEPENDENCIA");
    } else {
        printf("Situação do Aluno: REPROVADO");
    }
    
    
    
}    