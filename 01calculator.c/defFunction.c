#include <stdio.h>

/* Declaring the prototype*/

int add(int a, int b);

int main(void)
{
	int result = add(5, 3);

	printf("Result: %d", result);

	return 0;
}
/* Function definition*/

int add(int a, int b)
{
	return a + b;
}
