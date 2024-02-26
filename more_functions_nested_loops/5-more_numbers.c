#include "main.h"
#include <stdio.h>

/**
* more_numbers - display numbers from 0 to 14
*/

void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int c1 = 48;
int c2 = 47;
while ((c1 != 49) || (c2 < 53))
{
_putchar(c1);
if ((c1 == 49) && (c2 != 47))
{
_putchar(c2);
c2++;
}
else if (c1 == 57)
{
c1 = 49;
c2++;
}
else
c1++;
}
_putchar('\n');
}
i++;
}
