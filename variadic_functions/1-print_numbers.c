#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters.
 * @...: variables parameters.
 * Return: sum of all parameters or 0 if n = 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(ap, separator);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
			if (i <
		}
		va_end(ap);
	}
}
