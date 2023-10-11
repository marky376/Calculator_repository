#include <stdio.h>

int main(void)
{
	int i, j;

	printf("Enter number: ");
	scanf("%d", &i);

	printf("Enter another number: ");
	scanf("%d", &j);

	printf("Logical and is: %d\n", i && j);
	printf("Logical OR is: %d\n", i || j);
	printf("Logical exclusive OR is: %d\n", i ^ j);
	return (0);
}
