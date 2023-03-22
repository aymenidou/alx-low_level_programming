#include "main.h"

/**
 * _abs - entry
 * @i: input integer
 * Return: absolute value of int
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
