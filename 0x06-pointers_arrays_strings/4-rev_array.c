#include "main.h"

/**
 * reverse_array - reverse array
 * @a: integer input
 * @n: integer input
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = tmp;
	}
}
