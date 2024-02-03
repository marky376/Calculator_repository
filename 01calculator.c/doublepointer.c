#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 123;
	int *pr2; // declare a pointer to an integer
	int **pr1; // declare a pointer to a pointer to an integer

	pr2 = &num; // assign the address of num to pr2
	pr1 = &pr2; // assign the address of pr2 to pr1

	/*possible ways to find the value of variable num*/
	printf("Value of num is: %x\n", num); // print the value of num
	printf("Value of num is: %x\n", *pr2); // print the value of num using pr2
	printf("Value of num is: %x\n", **pr1); // print the value of num using pr1

	/*possible ways to find the address of variable num*/
	printf("Address of num is: %p\n", &num); // print the address of num
	printf("Address of num is: %p\n", pr2); // print the address of num using pr2
	printf("Address of num is: %p\n", *pr1); // print the address of num using pr1

	/*possible ways to find the value of pointer pr2*/
	printf("Value of pr2 is: %p\n", pr2); // print the value of pr2
	printf("Value of pr2 using pr1 is: %p\n", *pr1); // print the value of pr2 using pr1

	/*possible ways to get the address of pointer pr2*/
	printf("Address of pr2 is: %p\n", &pr2); // print the address of pr2
	printf("Address of pr2 using pr1 is: %p\n", pr1); // print the address of pr2 using pr1

	/*ways to get the value and address of the pointer to pointer pr2 which is pointer pr1*/
	printf("Value of pr1 is: %p\n", pr1); // print the value of pr1
	printf("Address of pr1 is: %p\n", &pr1); // print the address of pr1

	return 0;
}
