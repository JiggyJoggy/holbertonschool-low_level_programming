#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - entry point
 *
 * description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int start_hour, start_hour_two, start_minute, start_minute_two;

	start_hour = 0;
	start_hour_two = 0;
	start_minute = 0;
	start_minute_two = 0;

	while (start_hour <= 2)
	{
		while (start_hour_two <= 3)
		{
			while (start_minute <= 5)
			{
				while (start_minute_two <= 9)
				{
					_putchar(start_hour + '0');
					_putchar(start_hour_two + '0');
					_putchar(':');
					_putchar(start_minute + '0');
					_putchar(start_minute_two + '0');
					_putchar('\n');
					start_minute_two++;
				}
				start_minute_two = 0;
				start_minute++;
			}
			start_minute = 0;
			start_hour_two++;
		}
		start_hour_two = 0;
		start_hour++;
	}
}
