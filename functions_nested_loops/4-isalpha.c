#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for lowercase and uppercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
