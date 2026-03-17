#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
	char *copy;

	int i, length;

	if (str == NULL)
		return (NULL);

    /* Calculer la longueur de la chaîne */
	length = 0;
	while (str[length] != '\0')
		length++;

    /* Allouer la mémoire */
	copy = malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
		return (NULL);

    /* Copier le contenu */
	for (i = 0; i <= length; i++) /* <= pour inclure le '\0' */
		copy[i] = str[i];

	return (copy);
}
