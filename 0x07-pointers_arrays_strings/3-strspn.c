#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: input string
 * @accept: input bytes
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (l);
		}
	}
	return (l);
}
