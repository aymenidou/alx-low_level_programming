#include "main.h"


/**
 * *_realloc - entry point
 * @ptr: pointer
 * @old_size: int pointer old size
 * @new_size: int pointer new size
 * Return: pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p0 = ptr;
	unsigned int i = 0, size = new_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p)
	{
		if (old_size < new_size)
			size = old_size;
		for (i = 0; i < size; i++)
		{
			p[i] = p0[i];
		}
	}
	free(ptr);
	return (p);

}
