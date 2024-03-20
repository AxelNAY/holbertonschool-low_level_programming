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
	char c;
	int i;
	float f;
	char *str;
	char s[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	char *list = {"char", "int", "float", "char *"}

	va_start(ap, format);
	while (format[i] != NULL)
	{
		j = 0;
		while (s[j])
		{
			if (format[i] == s[j].s[0])
				return (ops[i].f);
		}
	}
	printf("\n");
	va_end(ap);
}
