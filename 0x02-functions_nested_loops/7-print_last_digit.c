#include "main.h"

/**
 * print_last_digit - entry
 * @i: input integer
 * Return: last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = (i % 10) * (-1);
		_putchar(j + '0');
		return (j);
	}
	else
	{
		j = (i % 10);
		_putchar(j + '0');
		return (j);
	}
}
