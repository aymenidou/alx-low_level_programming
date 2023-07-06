#include "main.h"

/**
 * get_bit - entry point
 * @n: input int
 * @index: bit index
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);

}
