#include "main.h"

/**
 * _strlen - entry point
 * @s: input string
 * Return: string size
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0, one = 0;

	while (s[i])
	{
		if (s[i] == 48)
		{
			i++;
		}
		else if (s[i] == 49)
		{
			i++;
			one = 1;
		}
		else
		{
			return (0);
		}
	}
	/** if there is no one */
	if (one == 0)
	{
		return (0);
	}
	return (i);
}
/**
 * power_two - entry point
 * @n: the power
 * Return: two to the power of n
 */
unsigned int power_two(int n)
{
	unsigned int i, r = 1;

	if (n == 0)
	{
		return (1);
	}
	for (i = 0; i < n; i++)
	{
		r *= 2;
	}
	return (r);
}

/**
 * binary_to_uint - entry point
 * @b: input string of 0 and 1
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, r = 0;

	if (b == NULL)
	{
		return (0);
	}
	i = _strlen(b);
	if (i == 0)
	{
		return (0);
	}
	for (j = 0; j < i; j++)
	{
		if (b[j] == 49)
		{
			r += power_two(i - j - 1);
		}
	}
	return (r);
}
