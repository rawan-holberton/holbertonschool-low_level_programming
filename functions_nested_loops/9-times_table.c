#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, result, dixaine, chiffre;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			dixaine = result / 10;
			chiffre = result % 10;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (dixaine == 0 && j != 0)
				_putchar(' ');
			if (dixaine != 0)
				_putchar(dixaine + '0');
			_putchar(chiffre + '0');
		}
		_putchar('\n');
	}
}
