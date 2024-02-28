#include "main.h"
#include <stdio.h>

/**
* *_strncat - conconate two strings.
*
* @dest: destination
*
* @src: source
*
* Return: resulting string dest.
*/

char *_strncat(char *dest, char *src)
{
int i = 0, len = 0;
while (dest[i++])
len++;
for (i = 0; src[i]; i++)
dest[len++] = src[i];
return (dest);
}
