#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}

	return (0);
}
