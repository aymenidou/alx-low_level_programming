#include <stdio.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: args
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf ("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
