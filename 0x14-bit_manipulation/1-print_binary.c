#include "main.h"

/**
 * print_binary - entry point
 * @n: input number
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	/**printf("%c", ((n & 1) == 0 ? '0' : '1'));*/
	_putchar(((n & 1) == 0 ? '0' : '1'));
}
