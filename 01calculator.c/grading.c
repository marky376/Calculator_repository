#include <stdio.h>

int gradingchecker(int n)
{
	while (n < 0)
	{
		printf("Please enter a mark that is equal to or above zero as per the learners grade!: ");
		scanf("%d", &n);
	}
	while (n > 100)
	{
		printf("Please enter a mark that is equal to or above zero as per the learners grade!: ");
		scanf("%d", &n);
	}

	if (n >= 70)
	{
		printf("The student's perfomance is excellent because the score is: %d", n);
	}
	else if (n >= 60)
	{
		printf("The student's perfomance is good because the score is: %d", n);
	}
	else if (n >= 50)
	{
		printf("The student's perfomance is average because the score is: %d", n);
	}
	else if (n >= 40)
	{
		printf("The student's perfomance is below average because the score is: %d", n);
	}
	else if (n < 40)
	{
		printf("The student's perfomance is a PASS because the score is: %d", n);
	}
}

int main(void)
{
	int n, check;

	printf("Please enter the student's score!: ");
	scanf("%d", &n);

	check = gradingchecker(n);

	return (0);
}
