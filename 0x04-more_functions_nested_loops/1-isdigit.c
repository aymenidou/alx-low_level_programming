#include "main.h"

/**
 * _isdigit - entry
 * @c: input
 * Return: 0 if digit
 */
int _isdigit(int c)
{

	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
