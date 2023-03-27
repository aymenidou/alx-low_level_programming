#include "main.h"

/**
 * print_rev - print reverse
 * @s: string pointer
 */

void print_rev(char *s)
{
	int num = 0, i;

	while (s[i] != '\0')
	{
		num++;
	}
	for (i = num - 1 ; i >= 0 ; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
