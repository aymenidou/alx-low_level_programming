#include "main.h"

/**
 * *array_range - entry point
 * @min: input int
 * @max: input int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p)
	{
		while (min <= max)
		{
			p[i] = min;
			min++;
			i++;
		}
	}
	return (p);
}
