#include "main.h"

/**
 * create_array - entry point
 * @size: array size
 * @c: character
 * Return: initialized array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);
	if (array)
	{
		for (i = 0 ; i < size ; i++)
		{
			array[i] = c;
		}
	}
	return (array);

}
