#include "main.h"

/**
 * *_calloc - entry point
 * @nmemb: n members
 * @size: size of array
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			array[i] = 0;
		}
	}
	return (array);
}
