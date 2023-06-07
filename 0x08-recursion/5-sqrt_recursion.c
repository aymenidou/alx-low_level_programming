#include "main.h"


/**
 * find_square - test numbers to find square
 * @n: input int
 * @m: input int
 * Return: square root
 */
int find_square(int n, int m)
{
	int x = m * m;

	if (x > n)
	{
		return (-1);
	}
	if (x == n)
	{
		return (m);
	}
	return (find_square(n, m + 1));
}

/**
 * _sqrt_recursion - square root by recursion
 * @n: integer input
 * Return: calculate square root
 */

int _sqrt_recursion(int n)
{
	return (find_square(n, 1));
}
