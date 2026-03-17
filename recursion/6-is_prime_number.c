#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - checks recursively if a number is prime
 * @n: the number to check
 * @i: current divisor to test
 *
 * Description: This function tests whether the number n is prime
 * by checking if it is divisible by any integer i up to n-1.
 * Returns 1 if n is prime, 0 otherwise.
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - determines if a number is prime
 * @n: the number to check
 *
 * Description: This function is the public interface to check
 * if a number n is prime. It calls is_prime_helper starting from 2.
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}


