#include<stdio.h>

int main(){

	int values[5];

	for(int i = 0; i <5; i++){
		printf("Enter value %d/5: ", (i+1));
		scanf("%d", &values[i]);
	}

	printf("The values entered were: \n");
	for(int i = 0; i <5; i++){
			printf("Values: %d", values[i]);
			printf(" | Array memory values: %p\n", values);
		}

	return 0;
}
