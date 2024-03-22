#include "variadic_functions.h"
#include "3-print_type.c"

/**
 * print_all - prints anything.
 * @format: format.
 * @...: variables parameters.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *separator = "";

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
