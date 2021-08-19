#include<stdio.h>

int main(){

	FILE *file;

	// fopen => declare two parameters, file name and type open;
	// w -> open file to writing, if the file already exists, will be
	// overwritten
	// r -> open the read-only file;
	// wa -> open to add content to file, if the file has contents, will be
	// add in the next line;
	file = fopen("file.txt", "w");

	// always that we finalize the file, we must close;
	fclose(file);

	return 0;
}
