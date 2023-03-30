#include "main.h"

/**
 * print_number - print integer
 * @n: int input
 */

void print_number(int n)
{

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + 48);

}
