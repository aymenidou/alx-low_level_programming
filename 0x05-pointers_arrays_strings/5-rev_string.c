#include "main.h"

/**
 * rev_string - reverse string
 * @s: string pointer input
 */

void rev_string(char *s)
{
	int n = 0, i, j = 0;
	char a, b;

	while (s[i] != '\0')
	{
		n++;
	}

	for (i = n - 1 ; i >= 0 ; i--)
	{
		char a = s[i];
		char b = s[j];

		s[i] = b;
		s[j] = a;
		j++;
	}
