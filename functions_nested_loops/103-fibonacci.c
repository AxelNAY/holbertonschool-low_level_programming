#include <stdio.h>

/**
* main - print the 50 first number of Fibonacci.
*
* Return: 0.
*/

int main(void)
{
long int fib1 = 0;
long int fib2 = 1;
long int fib3;
long int sum = 0;
while (1)
{
fibsum = fib1 + fib2;
if (fibsum > 4000000)
break;
if ((fibsum % 2) == 0)
sum += fib3;
fib1 = fib2;
fib2 = fib3;
}
printf("%ld", sum);
putchar('\n');
return (0);
}
