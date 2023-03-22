#include <stdio.h>

/**
 * main - entry point
 * Description: sum even fibonacci numbers up to 4000000
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, sum = 0, tmp;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		tmp = j;
		j += i;
		i = tmp;
	}
	printf("%d\n", sum);
	return (0);
}
