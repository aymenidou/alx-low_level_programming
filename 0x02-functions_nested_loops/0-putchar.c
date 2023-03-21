#include "main.h"

/**
 * main - putchar
 * Description: display _putchar using _putchar function
 * Return: 0
 */
int main(void)
{
	char msg[] = "_putchar";
	unsigned long int i = 0;

	while (i < sizeof(msg))
	{

		_putchar(msg[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
