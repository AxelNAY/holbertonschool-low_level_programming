#include "main.h"

/**
* create_array - creates an array of chars, and initializes it with a specific char.
* @size: size
* @c: character
* Return: pointer s or null.
*/

char *create_array(unsigned int size, char c)
{
char *s[size];
unsigned int i;
for (i = 0; i < size - 1; i++)
s[i] = c;
return (s);
}
