#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */

int main(void)
{
int n = 97;

while (n <= 122)
{
putchar(n);
n++;
}
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');


return (0);
}
