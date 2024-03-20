#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: format.
 * @...: variables parameters.
 */

void print_all(const char * const format, ...);
{
	va_list ap;
	int i = 0;
	int j;
	char *str;
	char *s = {"c", "i", "f", "s"};
	char *inclu = {"%c", "%d", "%f", "%s"};
	char *list = {"char", "int", "float", "char *"}

	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		while (s[j])
		{
			if (format[i] == s[j])
			{
				str = va_arg(ap, list[i]);
				printf("%s", inclu[j], str);
			}
			j++;
		}
		if (format[i++] == NULL)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
