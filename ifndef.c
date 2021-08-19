#include<stdio.h>

// ifndef -> is the compilation directive;
// below we're statement the constant value;
#ifndef value
	#define value 10
#endif

int main(){
	 printf("The constant value is:%d\n", value);
	 printf("The double of value is:%d", (2 * value));

	return 0;
}
