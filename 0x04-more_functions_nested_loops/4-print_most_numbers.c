#include "main.h"

/**
 * print_most_numbers - entry
 * Description: print 0 to 9 without 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
