#include "main.h"

/**
 * *malloc_checked - entry point
 * @b: input int
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *alloc_tst;

alloc_tst = malloc(b);
if (alloc_tst == NULL)
{
	exit(98);
}
return (alloc_tst);
}
