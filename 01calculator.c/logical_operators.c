#include <stdio.h>
/*
int main(void)
{
	int i, j;

	printf("Enter number: ");
	scanf("%d", &i);

	printf("Enter another number: ");
	scanf("%d", &j);

	printf("Logical and is: %d\n", i && j);
	printf("Logical OR is: %d\n", i || j);
	printf("Logical NOT is: %d\n", !(i && j));
	return (0);
}
*/

int main(void)
{
	int i, j;

	printf("Enter number: ");
	scanf("%d", &i);

	printf("Enter another number: ");
	scanf("%d", &j);

	printf("Bitwise and of the two numbers is: %d\n", i & j);
	printf("Bitwise or of the two numbers is: %d\n", i | j);
	printf("Bitwise exclusive OR is: %d\n", i ^ j);
	printf("Bitwise binary left operator is: %d\n", i << j);
	printf("Bitwise binary right operator is: %d\n", i >> j);
	printf("Bitwise ones complement of the first number is: %d\n", ~i);
	printf("Bitwise ones compliment of the second number is: %d\n", ~j);



	return 0;
}
