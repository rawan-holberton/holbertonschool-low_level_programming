#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	int is_sep;

	char sep[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		is_sep = 0;

		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		else
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (s[i - 1] == sep[j])
				{
					is_sep = 1;
					break;
				}
			}

			if (is_sep && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		}

		i++;
	}

	return (s);
}
