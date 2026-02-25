#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Numbers are separated by a comma and a space.
 * Printed in order, ending with 98.
 */
void print_to_98(int n)
{
	int current = n;

	while (current != 98)
	{
		printf("%d, ", current);

		if (current < 98)
			current++;
		else
			current--;
	}

	printf("98\n");
}
