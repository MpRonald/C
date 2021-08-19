#include<stdio.h>

int main(){

	int n; // variable that keep the value at memory;
	int* p; // pointer is a value that point to memory address;

	printf("Enter a number: ");
	scanf("%d", &n);

	// Initializing the pointer
	p = &n;

	printf("The informed number was: %d\n", n);
	printf("The memory address is: %d\n", &n);
	printf("Pointer's address hexadecimal: %p\n", p);

	return 0;
}
