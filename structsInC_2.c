#include<stdio.h>
#include<string.h>

struct st_student{ // we use st_ before name to show that
				   // statement is a structure;
	char name[10];
	int age;
	float height;
}student[5];

int main(){

	for(int i = 0; i < 5; i++){
		printf("Student Number %d\n", (i + 1));
		printf("Enter the student's name: ");
		fgets(student[i].name, 10, stdin);

		printf("Enter the student's age: ");
		scanf("%d", &student[i].age);

		printf("Enter the student's height: ");
		scanf("%f", &student[i].height);
		getchar();
	}

	for(int i = 0; i < 5; i++){
		printf("Student number %d \n", (i + 1));
		printf("Name: %s", student[i].name);
		printf("Age: %d\n", student[i].age);
		printf("Height: %f\n\n", student[i].height);
	}

	return 0;
}
