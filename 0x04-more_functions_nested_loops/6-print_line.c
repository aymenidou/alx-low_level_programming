#include "main.h"

/**
 * print_line - entry
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('_');
}
