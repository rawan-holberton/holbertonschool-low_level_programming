#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to be printed
 *
 * This function prints the characters of a string in reverse order
 * using recursion, followed by a newline.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
