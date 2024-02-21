#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
* _islower(@parameterc) - return 1 if c is lowercase and 0 otherwise,
* followed by a new line.
*
* Return: 1 if success or 0 otherwise.
*/

int _islower(int c)
{
if ((c >= 97) && (c <= 122))
return (1);
else
return (0);
}
