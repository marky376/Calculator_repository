// This code defines a function markm_print that takes a format string and variable number of arguments.
// The function formats the arguments according to the format string and writes the result to the standard output.

// Include the header file "shell.h" which contains the function declaration.
#include "shell.h"

// Include the header file "stdarg.h" which contains macros to handle variable arguments.
#include <stdarg.h>

// Define the function markm_print.
void markm_print(const char *format, ...)
{
	// Create a character array buffer to store the formatted string.
	char buffer[1024];

	// Declare a variable of type va_list to hold the variable arguments.
	va_list args;

	// Initialize the va_list variable with the variable arguments.
	va_start(args, format);

	// Format the variable arguments according to the format string and store the result in the buffer.
	vsnprintf(buffer, sizeof(buffer), format, args);

	// Clean up the va_list variable.
	va_end(args);

	// Write the contents of the buffer to the standard output.
	write(STDOUT_FILENO, buffer, strlen(buffer));
}
