#include <unistd.h>
#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase ten times, followed by a new line.
*/

void print_alphabet_x10(void)
{
int n = 1;
int m = 97;
while (n <= 10)
{
while (m <= 122)
{
_putchar(m);
m++;
}
m = 97;
n++;
_putchar('\n');
}
}
