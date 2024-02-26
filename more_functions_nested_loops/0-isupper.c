#include "main.h"
#include <stdio.h>

/**
* _isupper - checks uppercase
*
* @c: Character to analyse.
*
* Return: 1 if success or 0 otherwise.
*/

int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
return (1);
else
return (0);
}
