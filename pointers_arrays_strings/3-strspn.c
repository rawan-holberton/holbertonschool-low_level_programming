#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing accepted bytes
 *
 * Return: number of bytes in initial segment of s
 * that consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
			break;

		i++;
	}

	return (i);
}
