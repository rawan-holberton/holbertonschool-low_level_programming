#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Description: This function allocates memory and concatenates s1
 * with the first n bytes of s2. If n is greater than the length of
 * s2, the entire string s2 is used. If s1 or s2 is NULL, it is treated
 * as an empty string.
 *
 * Return: pointer to the newly allocated string, or NULL if it fails
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

    /* Calcul des longueurs */
/*rq: le code serait plus clair si l'exercise autorisé strlen */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

    /* Si n >= len2, on prend toute la chaîne s2 */
	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

    /* Copie de s1 */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

    /* Copie des n premiers caractères de s2 */
	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];

	result[len1 + n] = '\0';

	return (result);
}
