#include <unistd.h>
#include "main.h"

/**
* print_last_digit - Last digit.
*
* @c: Character to analyse.
*
* Return: Always a value.
*/

int print_last_digit(int c)
{
c = c % 10;
_putchar(c);
return (c);
}
