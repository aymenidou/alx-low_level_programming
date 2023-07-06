#include "main.h"

/**
 * get_endianness - entry point
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int x = 1;
	char *check;

	check = (char *)&x;

	return (*check);
}
