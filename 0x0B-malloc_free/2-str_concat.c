#include "main.h"

/**
 * _strlen - entry point
 * @c: input string
 * Return: return string length
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * str_concat - entry point
 * @s1: input character
 * @s2: input character
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int stringSize, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	stringSize = _strlen(s1);
	stringSize += _strlen(s2);
	p = malloc(sizeof(char) * (stringSize + 1));
	if (p)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			p[i] = s2[j];
		}
		p[i] = '\0';
	}
	return (p);
}
