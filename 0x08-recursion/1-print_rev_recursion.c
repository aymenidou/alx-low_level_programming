#include "main.h"

/**
 * _print_rev_recursion - printf using recusion in reverse
 * @s: input string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_rev_recursion(++s);
		_putchar(*s);
	}
}
