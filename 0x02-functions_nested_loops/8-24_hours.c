#include "main.h"

/**
 * jack_bauer - entry
 * Description: display minutes of the day
 */
void jack_bauer(void)
{

	int hours = 0;
	int minutes;

	while (hours <= 23)
	{
		minutes = 0;
		while (minutes <= 59)
		{

			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar('\n');
			minutes++;
		}

		hours++;
	}
}
