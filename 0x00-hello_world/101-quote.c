#include <stdio.h>
#include <unistd.h>

/**
 * main
 * Description: write to console without puts or printf
 * Return: 1 
 */
int main(void)
{
	char print[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, print, 60);
	return (1);
}
