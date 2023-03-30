#include "main.h"

/**
 * _strcmp - compare string
 * @s1: input string
 * @s2: input string
 * Return: string comparison
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}


}
