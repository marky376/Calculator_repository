#include <stdio.h>

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

	double average = size / sum;

	printf("The average among the lot is %.2lf\n", average);

	return 0;
}
