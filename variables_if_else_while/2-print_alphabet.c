#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a new line
 *              using only the putchar function.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
