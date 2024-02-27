#include "main.h"
#include <stdio.h>

/**
* rev_string - reverse a string
*
* @s: pointer s
*/

void rev_string(char *s)
{
int len = 0;
int i = 0;
int j = 0;
char p;
while (s[len])
len++;
for (i = len - 1; i >= len / 2; i--)
{
p = s[i];
s[i] = s[j];
s[j] = p;
j++;
}
}
