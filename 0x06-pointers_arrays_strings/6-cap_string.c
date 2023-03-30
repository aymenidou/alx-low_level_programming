#include "main.h"

/**
 * *cap_string - capitalize a string
 * @str: input string
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;


	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}




	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
		&& (str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n'
			|| str[i-1] == ',' || str[i-1] == ';' || str[i-1] == '.'
			|| str[i-1] == '!' || str[i-1] == '?' ||str[i-1] == '"'
			|| str[i-1] == '(' || str[i-1] == ')' || str[i-1] == '{'
			|| str[i-1] == '}'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
