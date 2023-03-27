#include "main.h"

/**
 * puts2 - print numbers
 * @str: input string
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		printf("%c", str[j]);
		j += 2;
	}
	printf("\n");
}
