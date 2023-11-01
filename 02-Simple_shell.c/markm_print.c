#include "shell.h"
#include <stdarg.h>

void markm_print(const char *format, ...)
{
	char buffer[1024];
	va_list args;

	va_start(args, format);

	vsnprintf(buffer, sizeof(buffer), format, args);

	va_end(args);

	write(STDOUT_FILENO, buffer, strlen(buffer));
}
