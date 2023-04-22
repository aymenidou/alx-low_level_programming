#include <stdlib.h>

/**
 * *_strdup - entry point
 * @str: input string
 * Return: pointer to string duplicate
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
