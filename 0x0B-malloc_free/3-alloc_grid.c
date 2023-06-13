#include "main.h"

/**
 * alloc_grid - entry point
 * @width: array width
 * @height: array height
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **array, len = width * height;
	int i, j;

	if (len <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	}
	return (array);
}
