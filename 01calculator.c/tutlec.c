#include <stdio.h>

// variable declaration:
extern int a, b; // declare variables a and b
extern int c; // declare variable c
extern float f; // declare variable f

int main()
{
	/* variable definition*/
	int a, b; // define variables a and b
	int c; // define variable c
	float f; // define variable f
	/* actual initialization*/

	a = 10; // initialize variable a with value 10
	b = 20; // initialize variable b with value 20
	c = a + b; // calculate the sum of a and b and assign it to c

	printf("Value of c: %d/n", c); // print the value of c
	f = 70.0 / 3.0; // calculate the division of 70.0 by 3.0 and assign it to f

	printf("Value of f: %f\n", f); // print the value of f
	return 0;
}
