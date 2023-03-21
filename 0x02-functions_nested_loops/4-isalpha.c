#include "main.h"

/**
 * _isalpha - entry
 * @c: input character
 * Return: 1 if lowercase or uppercase 0 if not
 */
int _isalpha(int c)
{

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
