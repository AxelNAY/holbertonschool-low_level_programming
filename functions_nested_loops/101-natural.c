#include <stdio.h>

/**
* main - print all the multiple of 3 and 5.
*
* Return: 0.
*/

int main(void)
{
int i = 0;
int sum = 0;
while (i <= 1024)
{
if ((i % 3) == 0)
sum = sum + i;
else if ((i % 5) == 0)
sum = sum + i;
i++;
}
putchar((sum / 100) % 10 + 48);
putchar((sum / 1000) % 10 + 48);
putchar((sum / 10000) % 10 + 48);
putchar((sum / 100) % 10 + 48);
putchar((sum / 10) % 10 + 48);
putchar(sum % 10 + 48);
putchar('\n');
return (0);
}
