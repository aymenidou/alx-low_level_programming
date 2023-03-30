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
	int i = _strlen(dest), j, k = _strlen(src);

	if (n <= 0)
	{
		return (dest);
	}

	for (j = 0; j < i && j < n; j++)
	{
		if (j >= k)
		{
			dest[j] = '\0';
		}
		else
		{
		dest[j] = src[j];
		}
	}
	return (dest);
}
