#include <stdlib.h>

/**
 * *argstostr - entry point
 * @ac: args count
 * @av: args array
 * Return: args concatenation
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	concat = malloc((len + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[len] = av[i][j];
			len++;
		}
		concat[len] = '\n';
		len++;
	}
	concat[len] = '\0';
	return (concat);

}
