#include "main.h"

/**
 * swap_int - swap two integers
 * @a: pointer integer
 * @b: pointer integer
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
