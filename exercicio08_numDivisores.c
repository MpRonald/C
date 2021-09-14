/*8.Faça uma fUnçào que fecebe, por parâmetro. um valor inteiro e positivo 
e retorna o número de divisores desse valor.*/

#include<stdio.h>
 
int numDiv();
 
int main(){
  
	numDiv();
	return 0;

}
 
int numDiv(){
    int num,i = 1,contador = 0;
	
	printf("Digite um numero e veja quantos divisores ele tem: ");
	scanf("%d",&num);
  
	for(i;i <= num; i++){
    	if(num % i == 0){
        	contador++;
     	}
  	}
  
  	printf ("número de divisores e %d" ,contador);
}
