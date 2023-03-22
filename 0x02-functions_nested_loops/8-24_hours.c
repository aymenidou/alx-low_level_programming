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
		while (minutes <= 59)
		{
			if (hours < 10)
			{
				_putchar('0');
			}
			_putchar(hours + 48);
			_putchar(':');
			if (minutes < 10)
			{
				_putchar('0');
			}
			_putchar(minutes + 48);

		}

		hours++;
	}
}
