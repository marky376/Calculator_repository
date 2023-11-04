#include <stdio.h>

int main(void)
{
	char StudentName[50];
	char Class[50];
	char Gender[50];

	printf("Please enter your name: ");
	fgets(StudentName, sizeof(StudentName), stdin);

	printf("Please enter your class in  either streams of A, B, C and D: ");
	fgets(Class, sizeof(Class), stdin);

	printf("Please enter your gender either 'M' for Male and 'F' for Female: ");
	fgets(Gender, sizeof(Gender), stdin);

	printf("Thanks for your information: %s\n", StudentName);

	if (Class != NULL)
	{
		printf("Please seek guidance from the registration office\n");
	}

	return 0;
}
