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

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*src != '\0')
{
dest[i] = src[i];
i++;
}
*dest = '\0';
return (dest);
}
