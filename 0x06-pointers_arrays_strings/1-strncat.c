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
 * *_strncat - concat string
 *@dest: string destination
 *@src: string source
 *@n: integer specifying n bytes
 *Return: string concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest), k;

	if (n <= 0)
	{
	return (dest);
	}
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';
	return (dest);
}
