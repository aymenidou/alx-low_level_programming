#include "main.h"

/**
 * *_strpbrk - return first occurence of the bytes in accept
 * @s: input string
 * @accept: input string
 * Return: pointer to byte matching bytes of accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
