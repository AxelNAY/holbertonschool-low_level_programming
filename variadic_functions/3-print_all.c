#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

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
		{'\0', NULL}
	};

	va_start(ap, format);
	i = 0;
	separator = "";
	while (format[i] != '\0' && format != NULL)
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
}
