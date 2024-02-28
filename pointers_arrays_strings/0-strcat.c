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
int i;
int src_leng = 0;
int dest_leng = 0;

while (*src++)
src_leng++;
while (dest[i++]);
dest_leng++; 
for (i = 0; src[i] && i < src_leng; i++)
{
dest[leng++] = src[i];
}
return (dest);
}
