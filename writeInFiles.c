#include<stdio.h>

int main(){

	FILE *file;
	char name[10];

	file = fopen("names.txt", "w");
	if(file){
		printf("Enter name or press 0 (zero) to exit: ");
		fgets(name, 10, stdin); // stdin -> standard input
		while(name[0] != '0'){
			fputs(name, file);
			printf("Enter name or press 0 (zero) to exit: ");
			fgets(name, 10, stdin);
		}
	} else {
		printf("File not created!");
	}

	fclose(file);

	return 0;
}
