#include "main.h"

/**
 * _atoi - converts string to integer safely
 * @s: input string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;

		i++;
	}

	if (sign == 1)
		return (int)result;

	if (result > 2147483647)
		return (-2147483648);

	return (-(int)result);
}
