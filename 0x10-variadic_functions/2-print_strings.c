#include "variadic_functions.h"

/**
 * print_strings - entry point
 * @separator: output separator
 * @n: inputs
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
