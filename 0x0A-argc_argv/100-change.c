#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: args array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int total, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	while (total > 0)
	{
		if (total >= 25)
			total -= 25;
		else if (total >= 10)
			total -= 10;
		else if (total >= 5)
			total -= 5;
		else if (total >= 2)
			total -= 2;
		else if (total >= 1)
			total -= 1;
		coins += 1;
	}
	printf("%d\n", coins);

	return (0);
}
