#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 * @size: The size of the array to allocate
 * @c: The character to initialize each element of the array
 *
 * Return: Pointer to the newly allocated array, or NULL on failure
 *         or if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
