#include<stdio.h>
// when we use the pointers, we're using hardware;
// memory address how parameter
void increment(int* value){
	printf("Value before increment %d\n", (*value)); //value
	printf("The memory address is %d\n", value); // memory address
	// below the value will be to increment
	printf("Value after increment %d\n", ++(*value)); // value
	printf("The memory address after increment is %d\n", value); // memory addres

}

int main(){

	int counter = 50;

	increment(&counter);

	return 0;
}
