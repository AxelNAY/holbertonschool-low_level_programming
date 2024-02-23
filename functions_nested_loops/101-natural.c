#include <unistd.h>
#include "main.h"

/**
* main - print all the multiple of 3 and 5.
*/

void main(void)
{
int i = 0;
while (i <= 1024)
{
if ((i % 3) == 0)
{
_putchar(i + 48);
  _putchar('\n');
}
else if ((i % 5) == 0)
{
_putchar(i + 48);
_putchar('\n');
}
i++;
}
}
