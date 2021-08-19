#include<stdio.h>

int main(){

	FILE *file;
	char c;

	file = fopen("file.txt", "r"); // reading file

	if(file){
		printf("File found below!\n");
		while((c = getc(file)) != EOF){ // EOF -> end of file;
			printf("%c", c);
		}
	}else {
		printf("File not found!");
	}

	fclose(file);
	return 0;
}
