#include<stdio.h>

// recursive function is when the function calls itself;
// it's necessary that the function has a stop condition;

int fib(int n){
	if(n == 0){
		return 0;
	} if (n == 1){
		return 1;
	} return fib(n - 1) + fib(n - 2);
}

int main (){

	int q;
	printf("Enter the sequence number:\n");
	scanf("%d", &q);

	for(int i = 0; i < q; i++){
		printf("%d ", fib(i + 1));
	}

	return 0;
}
