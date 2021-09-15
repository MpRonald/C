#include<stdio.h>

int main(){

	float values[5] = {1, 2, 3, 4, 5};

	for(int i = 0; i < 5; i++){
		printf("The value %d has %ld bytes\n",
				values[5], sizeof(values[i]));
	}

	printf("The array has a totality %ld bytes\n", sizeof(values));
	printf("and address memory is: %p\n", *values);

	return 0;
}
