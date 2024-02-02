#include <stdio.h>

/**
 * Calculates the average of numbers in an array.
 * 
 * This program prompts the user to enter the size of an array and then
 * prompts the user to enter the numbers. It calculates the average of
 * the numbers and prints the result.
 * 
 * @return 0 if the program executed successfully, 1 if there was an error.
 */
int main()
{
	int size, i;
	double sum = 0;

	printf("Enter the size of an array: ");
	scanf("%d", &size);

	if (size <= 0)
	{
		printf("Invalid array size. Please enter a positive value! ");

		return 1;
	}

	int numbers[size];

	printf("Enter %d numbers:\n ", size);

	for (i = 0; i < size; i++)
	{
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}

	double average = sum / size;

	printf("The average among the lot is %.2lf\n", average);

	return 0;
}
