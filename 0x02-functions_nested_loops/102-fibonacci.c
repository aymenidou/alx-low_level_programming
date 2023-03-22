#include <stdio.h>

/**
 * main - entry
 * Description: display first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	double i = 1, j = 2, k, tmp;

	printf("%.f, %.f, ", i, j);
	for (k = 3; k <= 50; k++)
	{
		tmp = j;
		j += i;
		i = tmp;
		printf("%.f",j);
		if (k != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
