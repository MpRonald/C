/*10.	Escreva um procedimento que recebe as 3 notas de um 
aluno por par�metro e uma letra. Se a letra for A o procedimento 
calcula a m�dia aritmetica das  notas do aluno, se  for P,a	sua m�dia ponderada 
(pesos: 5, 3 e 2).*/

#include<stdio.h>

float medias();

int main(){
    
    medias();
    return 0;
}

float medias(){
    char letra;
   
    float nota1, nota2, nota3;
   
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
   
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);

    
    printf("Digite:\n'A' => media aritim�tica.\n'P' => media ponderada.\n");
    scanf(" %c%*[^\n]",&letra); 
    if(letra == 'A'){
        float mediaA = (nota1 + nota2 + nota3) / 3;
        printf("A media aritim�tica �: %.2f", mediaA);
    } else if (letra == 'P'){
        float mediaP = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / (5 + 3 + 2);
        printf("A media ponderada �: %.2f", mediaP);
    }
}
