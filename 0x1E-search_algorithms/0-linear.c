#include "search_algos.h"

/**
 * linear_search - this function search an array using linear algorithm
 * @array: the array
 * @size: the size of the array
 * @value: value to search for
 * Return: return the index or -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
