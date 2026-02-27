#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * You can only use _putchar twice in your code
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c); /* first use */

	_putchar('\n');  /* second use */
}
