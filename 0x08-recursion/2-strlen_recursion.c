#include "main.h"


/**
 * _strlen_recursion - return string length
 * @s: input string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (!s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) +1);
}