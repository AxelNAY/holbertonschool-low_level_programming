#include <stdio.h>

/**
* main - print the 50 first number of Fibonacci.
*
* Return: 0.
*/

int main(void)
{
int i = 1;
long int fib1 = 0;
long int fib2 = 0;
long int fib3 = 1;
while (i <= 50)
{
fib2 = fib3;
fib3 = fib3 + fib1;
fib1 = fib2;
printf("%ld", fib3);
if (i < 50)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}
