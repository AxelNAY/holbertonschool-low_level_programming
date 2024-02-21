#include <unistd.h>
#include "main.h"

/** 
* _abs - absolute value.
*
* @c: Character to analyse.
*
* Return: Always a value.
*/

int _abs(int c)
{
if (c < 0)
c = -c;
return (c);
}
