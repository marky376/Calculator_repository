#include <unistd.h>

void print_char(char c)
{
	write(1, &c, 1); // writes the character 'c' to the standard output
}

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		print_char(c); // prints the current character
		c = c + 1; // increments the character by 1
	}
}

int main(void)
{
	print_alphabet(); // calls the function to print the alphabet
	print_char('\n'); // prints a new line character

	return (0); // returns 0 to indicate successful execution
}
