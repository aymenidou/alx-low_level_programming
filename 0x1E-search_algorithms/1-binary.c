#include "search_algos.h"

/**
 * binary_search - this function search an array using binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: value to search for
 * Return: return the index or -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size, i, j;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		if (left == right)
		{
			return (-1);
		}
		i = (left + (right - 1)) / 2;
		printf("Searching in array: ");
		for (j = left; j < right; j++)
		{
			if (j < right - 1)
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);
		}
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] > value)
		{
			right = i;
		}
		else if (array[i] < value)
		{
			left = i + 1;
		}
	}
	return (-1);
}
