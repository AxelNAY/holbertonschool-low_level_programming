#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
int res, mul1, mul2;
mul1 = atoi(argv[0]);
mul2 = atoi(argv[1]);
res = mul1 * mul2;
printf("%d\n", res);
return (0);
}
}
