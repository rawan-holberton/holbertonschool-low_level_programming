#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using only putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
		putchar(i < 10 ? i + '0' : i - 10 + 'a');

	putchar('\n');

	return (0);
}
