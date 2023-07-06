#include "main.h"

/**
 * flip_bits - entry point
 * @n: input integer
 * @m: input integer
 * Return: number of bits needed to change the number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m, bits = 0;

	while (d > 0)
	{
		bits += (d & 1);
		d >>= 1;
	}
	return (bits);
}
