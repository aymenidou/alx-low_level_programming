#include "main.h"

/**
 * _isupper - entry
 * @c: input
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
