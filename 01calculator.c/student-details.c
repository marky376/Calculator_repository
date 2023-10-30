#include <stdio.h>
#include <unistd.h>
int main() 
{
	char studentName[100];
	char regNumber[20];
	char lecturerName[100];
	char course[100];

    /* Prompt for and read student's name*/
	printf("Enter student's name: ");
	fgets(studentName, sizeof(studentName), stdin);

    /* Prompt for and read registration number*/
	printf("Enter registration number: ");
	fgets(regNumber, sizeof(regNumber), stdin);

    /* Prompt for and read lecturer's name*/
	printf("Enter lecturer's name: ");
	fgets(lecturerName, sizeof(lecturerName), stdin);

    /* Prompt for and read course name*/
	printf("Enter course name: ");
	fgets(course, sizeof(course), stdin);

    /* Display the collected information*/
	printf("\nStudent's Information:\n");
	printf("Name: %s", studentName);
	printf("Registration Number: %s", regNumber);
	printf("Lecturer's Name: %s", lecturerName);
	printf("Course: %s", course);

	return 0;
}
