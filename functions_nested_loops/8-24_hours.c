#include <unistd.h>
#include "main.h"

/**
* jack_bauer - Display minutes.
*
* Return: Always a value.
*/

void jack_bauer(void)
{
int h1 = 48;
int h2 = 48;
 int m1 = 48;
 int m2 = 48;
  while ((h1 <= 50) && (h2 <= 51))
    {
_putchar(h1);
_putchar(h2);
_putchar(58);
 while ((m1 <= 53) && (m2 <= 57))
   {
     _putchar(m1);
     _putchar(m2);
     m1++;
     m2++;
   }
 h1++;
 h2++;
    }
}
