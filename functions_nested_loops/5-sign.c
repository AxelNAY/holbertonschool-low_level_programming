#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
* print_sign - return 1 if c is positive.
* 0 if 0.
* -1 if is negative.
*
* @c: Character to analyse.
*
* Return: 1 if success or 0 otherwise.
*/

int print_sign(int c)
{
if (c > 0)
{
_putchar(43);
return (1);
}
else if (c == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
