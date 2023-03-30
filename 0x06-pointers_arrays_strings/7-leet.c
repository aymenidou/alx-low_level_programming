#include "main.h"

/**
 * *leet - 1337
 * @str: string input
 * Return: return encoded string
 */

char *leet(char *str)
{
	char check[] = "a4e3o0t7l1";
	int i = 0, j;

	while (str[i] != '\0')
	{
	for (j = 0; j < 10; j += 2)
	{
		if (str[i] == check[j] || str[i] == (check[j] - 32))
		{
			str[i] = check[j + 1];
		}
	}

	i++;
	}
	return (str);
}
