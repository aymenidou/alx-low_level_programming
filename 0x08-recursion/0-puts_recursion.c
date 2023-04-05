#include "main.h"

/**
 * _puts_recursion - printf character in recursion
 * @s: input string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_put_recursion(s++);
	}
	else
	{
		_putchar('\n');

	}
}