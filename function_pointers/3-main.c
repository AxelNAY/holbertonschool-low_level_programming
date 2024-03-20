#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code.
 * @argc: numbers of arguments.
 * @argv: arguments.
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
	}

	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", o(a, b));

	return (0);
}
