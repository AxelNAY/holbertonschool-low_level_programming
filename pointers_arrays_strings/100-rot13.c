#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string using rot13.
*
* @c: pointer c
*
* Return: result
*/

char *rot13(char *c)
{
int i;
char alph[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'
   , 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S'
   , 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd'
   , 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'
   , 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'
   , 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F'
   , 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q'
   , 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b'
   , 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
for (i = 0; c[i]; i++)
{
int j;
for (j = 0; j <= 52; j++)
{
if (c[i] == alph[i])
c[i] = rot[j];
}
}
return (c);
}
