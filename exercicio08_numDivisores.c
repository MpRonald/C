/*8.Fa�a uma fUn��o que fecebe, por par�metro. um valor inteiro e positivo 
e retorna o n�mero de divisores desse valor.*/

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
  
  	printf ("n�mero de divisores e %d" ,contador);
}
