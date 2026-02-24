#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number, finds its last digit,
 *              and prints a message describing the last digit
 *              according to the rules:
 *              - greater than 5
 *              - 0
 *              - less than 6 and not 0
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
		printf("%d is greater than 5\n", n);
	else if (last_digit == 0)
		printf("%d is 0\n", n);
	else if (last_digit < 6 && last_digit != 0)
		printf("%d is less than 6 and not 0\n", n);
	return (0);
}
