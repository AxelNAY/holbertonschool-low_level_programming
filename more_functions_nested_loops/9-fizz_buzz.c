#include <stdio.h>

/**
* main - Display the number from 0 to 100
* Except multiplier of 3 and 5.
*
* Return: Always return 0
*/

int main(void)
{
int i = 1;
while (i < 101)
{
if (((i % 3) == 0) && ((i % 5) == 0))
printf("FizzBuzz");
if ((i % 3) == 0)
printf("Fizz");
else if ((i % 5) == 0)
printf("Buzz");
else
printf("%d", i);
if (i < 100)
putchar(32);
i++;
}
putchar('\n');
return (0);
}
