#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: size
* @c: character
* Return: pointer s or null.
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
return ('\0');
else
{
char *s;
s = malloc(size * sizeof(char));
for (i = 0; i < size - 1; i++)
s[i] = c;
if (s != '\0')
return (s);
else
return ('\0');
}
}
