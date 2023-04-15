#include <stdio.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: args
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
