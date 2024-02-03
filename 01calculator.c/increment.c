#include <stdio.h>

int main(void)
{
	int c = 4;

	printf("%d\n", c); // Print the initial value of c

	printf("%d\n", c++); /* Post-incrementing: 
	                       Print the value of c and then increment it */

	printf("%d\n", c); // Print the updated value of c

	printf("%d\n", ++c); /* Pre-incrementing: 
	                       Increment the value of c and then print it */

	return (0);
}
