#include "main.h"

/**
 * _strlen - string lengthvoid puts2(char *str);
 * @s: pointer char
 * Return: return length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
