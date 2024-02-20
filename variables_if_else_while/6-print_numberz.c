#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10 starting from 0,
*        only using putchar and without char variables.
*
* Return: Always 0.
*/

int main(void)
{
int n = 48;

while (n <= 57)
{
putchar(n);
n++;
}
putchar('\n');

return (0);
}
