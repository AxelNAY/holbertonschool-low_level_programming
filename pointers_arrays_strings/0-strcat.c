#include "main.h"
#include <stdio.h>

/**
* *_strcpy - conconate two strings.
*
* @dest: destination
*
* @src: source
*
* Return: resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int len = 0;

while (dest[i++]);
len++; 
for (i = 0; src[i]; i++)
{
dest[len] = src[i];
}
return (dest);
}
