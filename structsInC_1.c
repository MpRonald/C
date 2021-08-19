#include<stdio.h>
#include<string.h>

struct st_student{ // we use st_ before name to show that
				   // statement is a structure;
	char name[10];
	int age;
	float height;
};

int main(){

	struct st_student student1;

	printf("Enter the student's name: ");
	fgets(student1.name, 10, stdin);

	printf("Enter the student's age: ");
	scanf("%d", &student1.age);

	printf("Enter the student's height: ");
	scanf("%f", &student1.height);

	printf("Name: %s", student1.name);
	printf("Age: %d\n", student1.age);
	printf("Height: %f\n", student1.height);

	return 0;
}
