#include <unistd.h>

void print_char(char c)
{
	write(1, &c, 1);
}

void print_all_letters_starting_from(char c)
{
	if (c > 'z')
	{
		return;
	}
	print_char(c);
	print_all_letters_starting_from(c + 1);
}
void print_alphabet(void)
{
	print_all_letters_starting_from('a');
}
int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
