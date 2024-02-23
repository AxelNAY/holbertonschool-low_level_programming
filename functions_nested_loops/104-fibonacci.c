#include <stdio.h>

/**
* main - print the 50 first number of Fibonacci.
*
* Return: 0.
*/

int main(void)
{
int i = 1;
unsigned long fib1 = 0;
unsigned long fib2 = 1;
unsigned long sum;
while (i <= 98)
{
fib2 = sum;
sum = sum + fib1;
fib1 = fib2;
printf("%lu", sum);
if (i < 98)
{
putchar(44);
putchar(32);
}
i++;
}






 
putchar('\n');
return (0);
}
