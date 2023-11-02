#include <stdio.h>

int main()
{
	char SchoolName[100];
	char StudentName[100];
	char Class[50];
	char registrationNo[100];
	int a, b, c, d, e, f, g, h;

	printf("Please enter your school's name in caps: ");
	fgets(SchoolName, sizeof(SchoolName), stdin);

	printf("Please enter your name in caps: ");
	fgets(StudentName, sizeof(StudentName), stdin);

	printf("Please enter your class in caps: ");
	fgets(Class, sizeof(Class), stdin);

	printf("Please enter your registration number in caps: ");
	fgets(registrationNo, sizeof(registrationNo), stdin);

	printf("Please enter your score for Mathematics: ");
	scanf("%d", &a);

	printf("Please enter your score for English: ");
	scanf("%d", &b);

	printf("Enter your score for Kiswahili: ");
	scanf("%d", &c);
}
