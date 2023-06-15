#include "main.h"

/**
 * _strlen - entry point
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
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
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	if (n >= s2len)
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
		while (s2[i] != '\0' && i < n)
		{
			concatstr[s1len] = s2[i];
			s1len++;
			i++;
		}
		concatstr[s1len] = '\0';

	}
	return (concatstr);

}
