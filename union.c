#include<stdio.h>
#include<string.h>

union country{
	char name[100], continent[100];
};

int main(){

	union country countryDate;

	strcpy(countryDate.name, "USA");
	printf("The country is %s\n", countryDate.name);

	strcpy(countryDate.continent, "North America");
	printf("The continent is %s", countryDate.continent);

	return 0;
}
