#include <stdio.h>

/**
* main - print the 50 first number of Fibonacci.
*
* Return: 0.
*/

int main(void)
{
int i = 1;
unsigned long fib1 = 0, fib2 = 1, sum;
unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
unsigned long half1, half2;


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

fib1_half1 = fib1 / 10000000000;
fib2_half1 = fib2 / 10000000000;
fib1_half2 = fib1 % 10000000000;
fib2_half2 = fib2 % 10000000000;

for (i = 93; i < 99; i++)
{
half1 = fib1_half1 + fib2_half1;
half2 = fib1_half2 + fib2_half2;
if (fib1_half2 + fib2_half2 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (i < 98)
printf(", ");
fib1_half1 = fib2_half1;
fib1_half2 = fib2_half2;
fib2_half1 = half1;
fib2_half2 = half2;
}
printf("\n");
return (0);
}
