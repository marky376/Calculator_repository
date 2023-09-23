#include <stdio.h>
int main(void)
{
	int n;

	printf("Enter any number: ");
	scanf("%d", &n);

	while (n < 0)
	{
		printf("Please enter a number that is greater than 0(zero):  ");
		scanf("%d", &n);
	}

	if (n % 2 == 0)
		printf("%d is even", n);
	else
		printf("%d is odd" , n);

	return 0;

}
