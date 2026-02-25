#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;
	char h1, h2, m1, m2;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			h1 = (hour / 10) + '0';
			h2 = (hour % 10) + '0';
			m1 = (minute / 10) + '0';
			m2 = (minute % 10) + '0';

			putchar(h1);
			putchar(h2);
			putchar(':');
			putchar(m1);
			putchar(m2);
			putchar('\n');
		}
	}
}
