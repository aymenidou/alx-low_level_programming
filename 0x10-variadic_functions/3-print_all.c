#include "variadic_functions.h"

/**
 * prit_all - entry point
 * @format: var format
 */

void print_all(const char * const format, ...)
{
	int i;
	int unknown;
	char *string;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		unknown = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				break;
			case 's':
				string = va_arg(a_list, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				unknown = 1;
				break;
		}
		if (format[i + 1] != '\0' && unknown == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
