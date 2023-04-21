#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j, r = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i] ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);

}
