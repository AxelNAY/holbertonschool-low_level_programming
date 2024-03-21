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
	int num1, num2;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", o(num1, num2));

	return (0);
}
