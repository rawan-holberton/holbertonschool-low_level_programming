#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on format
 * @format: list of types (c, i, f, s)
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char *sep = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";

			printf("%s%s", sep, str);
			sep = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
