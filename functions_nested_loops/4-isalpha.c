#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
* _isalpha - return 1 if c is a letter and 0 otherwise,
* followed by a new line.
*
* @c: Character to analyse.
*
* Return: 1 if success or 0 otherwise.
*/

int _isalpha(int c)
{
if ((c >= 97) && (c <= 122))
return (1);
else if ((c >= 65) && (c <= 90))
return (1);
else
return (0);
}
