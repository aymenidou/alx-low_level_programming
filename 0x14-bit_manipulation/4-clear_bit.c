#include "main.h"

/**
 * clear_bit - entry point
 * @n: pointer to number
 * @index: index of bit to be changed
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
