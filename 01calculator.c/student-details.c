#include <stdio.h>
#include <unistd.h>

int main() 
{
	char studentName[100];
	char regNumber[20];
	char schoolName[100];
	char course[100];
	char lecturerName[100]; // Added variable to store lecturer's name

	/* Prompt for and read student's name */
	printf("Enter student's name: ");
	fgets(studentName, sizeof(studentName), stdin);

	/* Prompt for and read registration number */
	printf("Enter registration number: ");
	fgets(regNumber, sizeof(regNumber), stdin);

	/* Prompt for and read school's name */
	printf("Enter school's name: ");
	fgets(schoolName, sizeof(schoolName), stdin);

	/* Prompt for and read course name */
	printf("Enter course name: ");
	fgets(course, sizeof(course), stdin);

	/* Prompt for and read lecturer's name */
	printf("Enter lecturer's name: ");
	fgets(lecturerName, sizeof(lecturerName), stdin);

	/* Display the collected information */
	printf("\nStudent's Information:\n");
	printf("Name: %s", studentName);
	printf("Registration Number: %s", regNumber);
	printf("School's Name: %s", schoolName);
	printf("Course: %s", course);
	printf("Lecturer's Name: %s", lecturerName);

	return 0;
}
