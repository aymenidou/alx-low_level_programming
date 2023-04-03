#include "main.h"

/**
 * *_strchr - 
 * @s: input string
 * @c: character to find
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');'


}
