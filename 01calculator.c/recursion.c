/**
 * @brief Prints a single character to the standard output.
 * 
 * @param c The character to be printed.
 */
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * @brief Recursively prints all lowercase letters starting from the given character.
 * 
 * @param c The starting character.
 */
void print_all_letters_starting_from(char c)
{
	if (c > 'z')
	{
		return;
	}
	print_char(c);
	print_all_letters_starting_from(c + 1);
}

/**
 * @brief Prints the entire lowercase alphabet.
 */
void print_alphabet(void)
{
	print_all_letters_starting_from('a');
}

/**
 * @brief The entry point of the program.
 * 
 * @return 0 on successful execution.
 */
int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
