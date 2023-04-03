#include "main.h"

/**
 * *_memset - set memory value
 * @s: char pointer
 * @b: char value
 * @n: number of bytes
 * Return: return pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n ; m++)
	{
		s[m] = b;
	}
	return (s);

}
