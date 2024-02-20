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

while (n <= 57)
{
putchar(n);
if (n < 57)
putchar(", ");
n++;
}
putchar('\n');

return (0);
}
