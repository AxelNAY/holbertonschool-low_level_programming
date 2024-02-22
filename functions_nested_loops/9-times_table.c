#include <unistd.h>
#include "main.h"

/**                                                                                                                                                                                 
* jack_bauer - Display minutes.                                                                                                                                                     
*/

void jack_bauer(void)
{
int hour = 0;
int m1;
int m2;
while (hour <= 23)
{
m1 = 48;
m2 = 48;
while (m1 <= 53)
{
_putchar(hour / 10 + 48);
_putchar(hour % 10 + 48);
_putchar(58);
_putchar(m1);
_putchar(m2);
_putchar('\n');
if (m2 == 57)
{
m1++;
m2 = 48;
}
else
m2++;
}
hour++;
}
}
