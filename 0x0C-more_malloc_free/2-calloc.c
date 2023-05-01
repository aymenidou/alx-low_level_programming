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
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb);
	if (array)
	{
		for (i = 0; i < nmemb; i++)
		{
			array[i] = malloc(size);
			if (array[i] == NULL)
			{
				return (NULL);
			}
			array[i] = '\0';
		}
	}
	return (array);
}
