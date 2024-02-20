#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, except for q and e.
*
* Return: Always 0.
*/

int main(void)
{
int n = 97;

while (n <= 122)
{
if ((n != 101) && (n != 113))
putchar(n);

n++;
}
putchar('\n');

return (0);
}
