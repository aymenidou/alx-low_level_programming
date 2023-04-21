#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * Return: idx of first element that cmp doesn't return 0 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int idx = 0;

	if (size > 0)
	{
		if (array && cmp)
		{
			while (idx < size)
			{
				if (cmp(array[idx]))
					return (idx);

				idx++;
			}
		}
	}

	return (-1);
}
