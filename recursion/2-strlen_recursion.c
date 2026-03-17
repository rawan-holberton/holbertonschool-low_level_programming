#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */
/* 2-strlen_recursion.c - contains the _strlen_recursion function */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
