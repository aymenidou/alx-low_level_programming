#include "main.h"

/**
 * _islower - entry
 *@c: input character
 *Return: 1 if lowercase 0 if not
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
