#include <stdio.h>

void add(int a, int b)
{
	printf("The addition is %d\n", a + b);
}

void subtract(int a, int b)
{
	printf("The subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
	printf("The multiplication is %d\n", a * b);
}
/**void divide(int a, int b)
{
	printf("The division is %d\n", a / b);
}
void modulus(int a, int b)
{
	printf("The modulus is %d\n", a % b);
}*/

int main(void)
{
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply/* divide, modulus*/};

	unsigned int ch, a = 15, b = 10;

	printf("Enter Choice: 0 for add\n 1 for subtract\n 2 for multiply\n");	
	scanf("%d", &ch);

	if (ch > 2) return 0;

	(*fun_ptr_arr[ch])(a, b);

	return (0);
}

