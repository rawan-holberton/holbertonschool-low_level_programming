#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated concatenated string,
 *         or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0;
	int i, j;

    /* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

    /* Calculate lengths */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

    /* Allocate memory for concatenated string (+1 for null terminator) */
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

    /* Copy s1 into result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

    /* Copy s2 into result */
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

    /* Null-terminate */
	result[i + j] = '\0';

	return (result);
}
