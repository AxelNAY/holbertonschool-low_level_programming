#ifndef variadic_functions_h
#define variadic_functions_h

/**
 * struct pr - Struct pr
 * @pr: Type
 * @f: The function associated
 */

typedef struct pr
{
	char *pr;
	void (*f)(char c);
} pr_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char c);
void print_int(int i);
void print_float(float f);
void print_string(char *str);

#endif
