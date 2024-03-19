#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked by the user.
 * @s: operator passed as argument
 * @a: first number.
 * @b: second number.
 * Return: a pointer to the function that corresponds to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i] != NULL)
	{
		if (s = ops[i])
			return (ops[i]);
	}

	return (NULL);
}
