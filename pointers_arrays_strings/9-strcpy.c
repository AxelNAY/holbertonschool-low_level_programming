#include "main.h"
#include <stdio.h>

/**
* *_strcpy - copy all the data from src and dest.
*
* @dest: destination
*
* @src: source
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
return (dest);
}
