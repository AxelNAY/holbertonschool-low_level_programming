#include <stdio.h>

/**
* main - print the 50 first number of Fibonacci.
*
* Return: 0.
*/

int main(void)
{
int i = 0;
int fib1 = 0;
int fib2 = 1;
while (i <= 50)
{
fib2 = fib2 + fib1;
fib1 = fib2;
printf("%d", fib2);
putchar('\n');
i++;
}
return (0);
}
