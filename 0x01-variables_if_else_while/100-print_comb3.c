#include <stdio.h>

/**
 * main - print combination
 * Description: display all possible combination for twi digit number
 * Return: 0
 */
int main(void)
{

	int n1 = 48;
	int n2 = 48;

	while (n1 <= 57)
	{
		n2 = 48;
		while (n2 <= 57)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1);
				putchar(n2);
				if (n1 != 56)
				{

					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	return (0);
}

