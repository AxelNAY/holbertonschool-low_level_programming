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
printf("%s\n", argv[0] * argv[1]);
return (0);
}
}
