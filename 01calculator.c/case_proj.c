#include <stdio.h>

int main(void)
{
	int n;

	printf("Please enter the student's marks: ");
	scanf("%d", &n);

	switch(n)
	{
		case 0 ... 39:
			printf("The student has achieved an 'E' grade");
			break;
		case 40 ... 49:
			printf("The student has achieved a 'D' grade");
			break;
		case 50 ... 59:
			printf("The student has achieved a 'C' grade");
			break;
		case 60 ... 69:
			printf("The student has achieved a 'B' grade");
			break;
		case 70 ... 79:
			printf("The student has achieved an 'A' grade");
			break;
		default:
			printf("Invalid entry.Please enter a value that is between 0 to 100");
	}

	return (0);
}
