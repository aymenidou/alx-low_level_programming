#include "main.h"

/**
 * more_numbers - entry
 * Description: print numbers
 */

void more_numbers(void)
{

	int i = 0;

	while (i <= 14)
	{
		if (i % 10 != 0)
		{
			_putchar((i % 10) + 48);
			_putchar((i / 10) + 48);
		}
		else
		{
			_putchar(i + 48);
		}
		_putchar('\n');
		i++;
	}
}
