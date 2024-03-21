#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a character.
 * @c: character.
 */

void print_char(char c)
{
	printf("%c", c);
}

/**
 * print_int - print an integer.
 * @i: integer.
 */

void print_int(int i)
{
	printf("%d", i);
}

/**
 * print_float - print a float.
 * @f: float.
 */

void print_float(float f)
{
	printf("%f", f);
}

/**
 * print_string - print a string.
 * @str: string.
 */

void print_string(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
        printf("%s", str);
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
	char *str;

	va_start(ap, format);
	pr_t s[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	while (format[i] != NULL)
	{
		j = 0;
		while (s[j].pr)
		{
			if (format[i] == s[j].pr)
				return (s[i].f);
		}
	}
	printf("\n");
	va_end(ap);
}
