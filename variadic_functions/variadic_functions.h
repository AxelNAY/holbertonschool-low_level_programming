#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdarg.h>

/**
 * struct pr - Struct pr
 * @pr: Type
 * @f: The function associated
 */

typedef struct pr_t
{
	char pr;
	void (*f)(va_list);
} pr_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

#endif
