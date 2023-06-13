#include "main.h"

/**
 * _strlen - entry point
 * @str: input string
 * Return: return string length
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return i;
}
