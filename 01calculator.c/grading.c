#include <stdio.h>

/**
 * Function to check and grade a student's score.
 * 
 * @param n The student's score.
 */
int gradingchecker(int n)
{
	// Check if the score is below zero and prompt for a valid input
	while (n < 0)
	{
		printf("Please enter a mark that is equal to or above zero as per the learner's grade!: ");
		scanf("%d", &n);
	}

	// Check if the score is above 100 and prompt for a valid input
	while (n > 100)
	{
		printf("Please enter a mark that is equal to or below 100 as per the learner's grade!: ");
		scanf("%d", &n);
	}

	// Grade the student's performance based on the score
	if (n >= 70)
	{
		printf("The student's performance is excellent because the score is: %d", n);
	}
	else if (n >= 60)
	{
		printf("The student's performance is good because the score is: %d", n);
	}
	else if (n >= 50)
	{
		printf("The student's performance is average because the score is: %d", n);
	}
	else if (n >= 40)
	{
		printf("The student's performance is below average because the score is: %d", n);
	}
	else if (n < 40)
	{
		printf("The student's performance is a PASS because the score is: %d", n);
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
