#include "main.h"

/**
 * puts_half - entry point
 * @str: input string
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i / 2) + 1;
	}
	while (j < i)
	{
		printf("%c", str[j]);
		j++;
	}
	printf("\n");
}
