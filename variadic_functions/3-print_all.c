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
	printf("%c", ap);
}

/**
 * print_int - print an integer.
 * @ap: integer.
 */

void print_int(va_list ap)
{
	printf("%d", ap);
}

/**
 * print_float - print a float.
 * @ap: float.
 */

void print_float(va_list ap)
{
	printf("%f", ap);
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
        printf("%s", ap);
}

/**
 * print_all - prints anything.
 * @format: format.
 * @...: variables parameters.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j;

	va_start(ap, format);
	pr_t s[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	while (format[i])
	{
		j = 0;
		while (s[j].pr)
		{
			if (format[i] == s[j].pr)
				return (s[i].f);
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
