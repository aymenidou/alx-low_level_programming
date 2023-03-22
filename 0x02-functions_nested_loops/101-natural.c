#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: print sum of multiplication of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024 ; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
