#include "shell.h"

void markm_print(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	char buffer[1024];
	vsnprintf(buffer, sizeof(buffer), format, args);

	va_end(args);

	write(STDOUT_FILENO, buffer, strlen(buffer));
}
