#include "_putchar.c"

/**
 * main - putchar
 * Description: display _putchar using _putchar function
 * Return: 0
 */
int main(void)
{
	char msg[] = "_putchar\n";
	unsigned long int i = 0;

	while (i < sizeof(msg))
	{

		_putchar(msg[i]);
		i++;
	}
	return (0);
}
