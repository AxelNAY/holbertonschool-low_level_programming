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
	vprintf("%c", ap);
}

/**
 * print_int - print an integer.
 * @ap: integer.
 */

void print_int(va_list ap)
{
	vprintf("%d", ap);
}

/**
 * print_float - print a float.
 * @ap: float.
 */

void print_float(va_list ap)
{
	vprintf("%f", ap);
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
        vprintf("%s", ap);
}

/**
 * print_all - prints anything.
 * @format: format.
 * @...: variables parameters.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	int j;

	pr_t s[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ap, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (s[j].pr)
		{
			if (format[i] == s[j].pr)
				s[i].f(ap);
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
