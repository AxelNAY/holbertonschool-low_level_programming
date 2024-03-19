#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints strings, followed by a new line.
 * @separator: separator.
 * @n: number of parameters.
 * @...: variables parameters.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			va_arg(ap, char *) == "(nil)";
		printf("%s", va_arg(ap, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
