#include "main.h"

/**
 * *_strstr - find substring in a string
 * @haystack: input string
 * @needle: input string
 * Return: beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = i, j = 0; needle[j] != '\0'; j++, k++)
		{
			if (needle[j] != haystack[k] || haystack[k] == '\0')
				break;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
