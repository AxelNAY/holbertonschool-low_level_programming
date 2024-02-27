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
int len = 0;
int i;
while (src[len])
len++;
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
return (dest);
}
