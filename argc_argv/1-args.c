#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
  printf("%d\n", argc);
  return (0);
}
