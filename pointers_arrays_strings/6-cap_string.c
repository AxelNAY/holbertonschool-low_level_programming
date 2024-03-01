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
    int j;
    for (j = 0; sep[j] != '\0'; j++)
      {
	if (c[i] == c[j])
	  {
	    if (c[i + 1] >= 97 && c[i + 1] <= 122)
	      c[i + 1] = c[i + 1] - 32;
	    printf("%c", c[i + 1]);
	  }
      }
  }
return(0);
}
