#include "main.h"

/**
 * *string_nconcat - concat 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0, s2len = 0, i;
	char *concatstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1len] != '\0')
	{
		s1len++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	if(n >= s2len)
	{
		n = s2len;
	}
	concatstr = malloc((s1len + n + 1) * sizeof(char));
	if (concatstr)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			concatstr[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i] != '\0')
		{
			concatstr[s1len] = s2[i];
			s1len++;
			i++;
		}

	}
	return (concatstr);

}
