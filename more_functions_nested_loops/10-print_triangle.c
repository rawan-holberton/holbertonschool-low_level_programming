#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using the character '#'
 * @size: size of the triangle
 *
 * Description: If size is 0 or less, prints only a newline.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
