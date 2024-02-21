#include <unistd.h>
#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase, followed by a new line.
*/

void print_alphabet(void)
{
int n = 97;
while (n <= 122)
{
_putchar(n);
n++;
}
_putchar('\n');
return (0);
}
