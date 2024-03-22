#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a character.
 * @ap: character.
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print an integer.
 * @ap: integer.
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float.
 * @ap: float.
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string.
 * @ap: string.
 */

void print_string(va_list ap)
{
	if (ap == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(ap, char *));
}

/**
 * print_all - prints anything.
 * @format: format.
 * @...: variables parameters.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *separator;

	pr_t s[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(ap, format);
	i = 0;
	separator = "";
	while (format[i] && format)
	{
		j = 0;
		while (s[j].pr)
		{
			if (format[i] == s[j].pr)
			{
				printf("%s", separator);
				s[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");

	return (0);
}
