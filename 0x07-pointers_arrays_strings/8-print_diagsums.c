#include "main.h"

/**
 * print_diagsums - sum two diagonals
 * @a: input array
 * @size: input int
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum0 = 0, sum1 = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum0 += a[i];
	}
	for (j = size - 1; j < size * size - (size - 1); j += (size - 1))
	{
		sum1 += a[j];
	}
	printf("%d, %d\n", sum0, sum1);
}
