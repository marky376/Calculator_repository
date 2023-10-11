#include <stdio.h>

int main() 
{	
	char studentName[100];
	char regNumber[100];
	char lecturerName[100];
	char course[100];

    /* Prompt for and read student's name*/
	printf("Enter student's name: \n");
	scanf("%99[^\n]%*c", studentName);

    /* Prompt for and read registration number*/
	printf("Enter registration number: \n");
	scanf("%99[^\n]%*c", regNumber);

    /* Prompt for and read lecturer's name*/
	printf("Enter lecturer's name: \n");
	scanf("%99[^\n]%*c", lecturerName);

    /* Prompt for and read course name*/
	printf("Enter course name: \n");
	scanf("%99[^\n]%*c", course);

    /* Display the collected information*/
	printf("\nStudent's Information:\n");
	printf("Name: %s\n", studentName);
	printf("Registration Number: %s\n", regNumber);
	printf("Lecturer's Name: %s\n", lecturerName);
	printf("Course: %s\n", course);

	return 0;
}

