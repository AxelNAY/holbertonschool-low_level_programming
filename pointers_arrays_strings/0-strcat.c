#include "main.h"
#include <stdio.h>

/**
* *_strcpy - copy all the data from src and dest.
*
* @dest: destination
*
* @src: source
*
* Return: retun the copy pointer.
*/

char *_strcat(char *dest, char *src)
{
int i;
int leng = 0;

while (*src++);
leng++; 
for (i = 0; src[i] && i <= (leng - 1); i++)
{
dest[leng++] = src[i];
}
*dest = '\0';
return (dest);
}
