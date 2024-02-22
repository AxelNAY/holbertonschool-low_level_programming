#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int n, m;

for (n = 0; m < 9; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar((n % 10) + 48);
putchar((m % 10) + 48);

if (n == 8 && m == 9)
continue;

putchar(44);
putchar(32);
}
}
putchar('\n');

return (0);
}
