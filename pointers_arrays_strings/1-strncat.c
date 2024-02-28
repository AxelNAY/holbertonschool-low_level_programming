#include "main.h"
#include <stdio.h>

/**
* _strncat - conconate two strings.
*
* @dest: destination
*
* @src: source
*
* @n: number of bytes from src
*
* Return: resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len = 0;
while (dest[i++])
len++;
for (i = 0; src[i] && i < n; i++)
dest[len++] = src[i];
return (dest);
}
