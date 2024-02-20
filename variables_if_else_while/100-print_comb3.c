#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
*
* Return: Always 0.
*/

int main(void)
{
int n = 48;
int m = 48;
while (n <= 57)
{
if (m == 57) {
putchar(n);
m = 48;
n++;
}
else
putchar(n);
putchar(m);
if (n < 57)
{
putchar(44);
putchar(32);
}
m++;
}
putchar('\n');

return (0);
}
