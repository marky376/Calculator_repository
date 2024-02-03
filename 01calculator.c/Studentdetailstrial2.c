#include <stdio.h>

int main(void)
{
	char StudentName[50]; // variable to store student name
	char Class[50]; // variable to store class
	char Gender[50]; // variable to store gender

	printf("Please enter your name: ");
	fgets(StudentName, sizeof(StudentName), stdin); // read student name from user

	printf("Please enter your class in either streams of A, B, C and D: ");
	fgets(Class, sizeof(Class), stdin); // read class from user

	printf("Please enter your gender either 'M' for Male and 'F' for Female: ");
	fgets(Gender, sizeof(Gender), stdin); // read gender from user

	printf("Thanks for your information: %s\n", StudentName); // display student name

	if (Class != NULL) // check if class is not empty
	{
		printf("Please seek guidance from the registration office\n"); // display message
	}

	return 0;
}
