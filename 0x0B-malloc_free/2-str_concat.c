#include <stdlib.h>

/**
 * *str_concat - entry point
 * @s1: input string
 * @s2: input string
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0;

	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		i++;
	}
	i++;
	str = malloc((i * sizeof(char)) + 1);

	for (j = 0; s1[j] != '\0'; j++)
	{
		str[j] = s1[j];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		str[j] = s2[i];
		j++;
	}
	str[j] = '\0';

	return (str);

}
