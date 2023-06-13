#include "main.h"

/**
 * _strdup - duplicate string
 * @str: input string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = _strlen(str);
	p = malloc(sizeof(char) * (i + 1));
	if (p)
	{
		for (j = 0; j <= i; j++)
		{
			p[j] = str[j];
		}
	}
	return (p);

}
