/*
Definir três registros para armazenarem informações sobre três funcionários. 
Cada registro deve guardar a matrícula do funcionário (até 6 caracteres), 
o nome do funcionário (até 40 caracieres) e o salário. Faça um programa para 
ler as três informações e imprimir as informações por ordem crescente de 
salário, com o seguinte formato:
   MATRÍCULA     NOME      SALÁRIO
    XXXXX     YYYYYYYYYY   ZZZ.ZZ
    XXXXX     YYYYYYYYYY   ZZZ.ZZ
    XXXXX     YYYYYYYYYY   ZZZ.ZZ
*/

#include <stdio.h>

void main() {
    
    struct registro_funcionario {
        
        char nome[40];
        char matricula[6];
        float salario;
};

struct registro_funcionario funcionario;
    
    int min=0, max=0, med=0, i = 0;
    
    printf("\n---------- Registro de Funcionários -----------\n");
    
    for(int i = 0; i < 3; i++){
        
        printf("\nDigite o nome do funcionário ......: ");
        fgets(funcionario.nome, 40, stdin);
      
      
        printf("Digite a matrícula do funcionário: ");
        fgets(funcionario.matricula, 6, stdin);
    
        printf("Informe o salário do funcionário: ");
        scanf("%f", &funcionario.salario);
            
          if(funcionario.salario > min && funcionario.salario < med){
                min = funcionario.salario;
            } else if (funcionario.salario > min && funcionario.salario < max){
                min = med;
                med = funcionario.salario;
            } else if (funcionario.salario > min && funcionario.salario > med){
                min = med;
                med = max;
                max = funcionario.salario;
            }
        fflush(stdin);
            int ch;
            while((ch = getchar()) != EOF && ch != '\n');
        }
        
        printf("MATRÍCULA    NOME    SALARIO\n");
        printf("%s%s%.2f", funcionario.matricula, funcionario.nome, funcionario.salario);
        printf("%s%s%.2f", funcionario.matricula, funcionario.nome, funcionario.salario);
        printf("%s%s%.2f", funcionario.matricula, funcionario.nome, funcionario.salario);
    }
    
  