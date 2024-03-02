#include "main.h"
#include <stdio.h>

/**
* main - print a square
*
* Return: number of times for triangle
*/

int main(void)
{
unsigned int i = 2;
unsigned long num = 612852475143;

while (i != num)
{
if (num % i == 0)
{
num = num / i;
}
else
i++;
}
printf("%lu\n", num);
return (0);
}
