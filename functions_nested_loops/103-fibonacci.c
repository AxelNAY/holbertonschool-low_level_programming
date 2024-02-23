#include <stdio.h>

/**
* main - print the 50 first number of Fibonacci.
*
* Return: 0.
*/

int main(void)
{
long int fib1 = 0;
long int fib2 = 0;
long int fib3 = 1;
long int sum = 0;
while (sum < 4000000)
{
fib2 = fib3;
fib3 = fib3 + fib1;
fib1 = fib2;
sum = sum + fib3;
}
printf("%ld", sum);
putchar('\n');
return (0);
}
