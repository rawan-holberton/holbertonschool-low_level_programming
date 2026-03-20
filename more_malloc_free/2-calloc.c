#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Description: The _calloc function allocates memory for an array
 * of nmemb elements of size bytes each and sets the memory to zero.
 * If nmemb or size is 0, or if malloc fails, the function returns NULL.
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total;
	unsigned int i;
	unsigned char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

    /* Initialiser la mémoire à 0 */
	p = (unsigned char *)ptr;
	for (i = 0; i < total; i++)
		p[i] = 0;

	return (ptr);
}
