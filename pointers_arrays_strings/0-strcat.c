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
char *fin_dest = dest;

while (dest[i++]);
len++; 
while (*src != '\0')
dest[len++] = src[i];
dest = '\0';
return (fin_dest);
}
