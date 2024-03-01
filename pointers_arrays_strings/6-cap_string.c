#include "main.h"
#include <stdio.h>

/**
* cap_string - capitalizes all words of a string.
*
* @c: pointer c
*
* Return: result
*/

char *cap_string(char *c)
{
int i;
char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; c[i] != '\0'; i++)
  {
    if (i == 0 && c[i] >= 97 && c[i] <= 122)
    c[i] = c[i] - 32;
    int j;
    for (j = 0; sep[j] != '\0'; j++)
      {
	if (c[i] == c[j])
	  {
	    if (c[i + 1] >= 97 && c[i + 1] <= 122)
	      c[i + 1] = c[i + 1] - 32;
	  }
      }
  }
return(c);
}
