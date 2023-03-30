#include "main.h"

/**
*_strlen - string length
*@str: input string
*Return: string length
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strncpy - copy string
 * @dest: input string
 * @src: input string
 * @n: input string
 * Return: string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	if (n <= 0)
	{
		return (dest);
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
