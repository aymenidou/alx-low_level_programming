#include "main.h"

/**
 * rev_string - reverse string
 * @s: string pointer input
 */

void rev_string(char *s)
{
	int n = 0, i, j = 0;
	char a, b;

	while (s[n] != '\0')
	{
		n++;
	}
j = n - 1;
	for (i = 0 ; i < n / 2 ; i++)
	{
		a = s[i];
		b = s[j];

		s[i] = b;
		s[j] = a;
		j--;
	}
}
