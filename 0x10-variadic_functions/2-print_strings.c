#include "variadic_functions.h"

/**
 * print_strings - entry point
 * @separator: strings separator
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *s;

	/* initialize the argument list from the start */
	va_start(ap, n);
	/* iterate through each argument*/
	for (index = 0; index < n; index++)
	{
		/* print next argument */
		s = va_arg(ap, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		/* print separator only between arguments */
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
