#include <stdio.h>

int main(void)
{
	int n;

	printf("Please enter student's score: ");
	scanf("%d", &n);


	if (n >= 0 && n <= 100)
	{
		if (n >= 0 && n <= 39)
		{
			printf("The student has achieved a 'Pull up'");
		}
		else if (n >= 40 && n <= 49)
		{
			printf("The student has achievde a 'Fail'");
		}
		else if (n >= 50 && n <= 59)
		{	
			printf("The student has achieved an 'Average'");
		}
		else if (n >= 60 && n <= 69)
		{
			printf("The student has achieved a 'Good'");
		}
		else if  (n >= 70 && n <= 100)
		{
			printf("The student has achieved an 'Excellent'");
		}
		else
		{
			printf("Please enter a valid number between 0 and 100\n");
		}
	}
	
	return (0);

}
