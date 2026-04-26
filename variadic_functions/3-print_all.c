#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - prints char
 * @args: argument list
 */
void print_c(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_i - prints integer
 * @args: argument list
 */
void print_i(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_f - prints float
 * @args: argument list
 */
void print_f(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_s - prints string
 * @args: argument list
 */
void print_s(va_list *args)
{
	char *s = va_arg(*args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything based on format
 * @format: format string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *sep = "";
	va_list args;

	print_op_t ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (ops[j].op != NULL)
		{
			if (format[i] == ops[j].op[0])
			{
				printf("%s", sep);
				ops[j].f(&args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
