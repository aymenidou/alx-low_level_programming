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
 * *_strcat - concat string
 *@dest: string destination
 *@src: string source
 *Return: string concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest), k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';
	return (dest);
}
