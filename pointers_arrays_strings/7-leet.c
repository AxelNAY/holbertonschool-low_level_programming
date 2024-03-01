#include "main.h"
#include <stdio.h>

/**
* leet - capitalizes all words of a string.
*
* @c: pointer c
*
* Return: result
*/

char *leet(char *c)
{
int i;
char let[10] = {'a', 'A', 'E', 'e', 'O', 'o'
, 'T', 't', 'L', 'l'};
int num[5] = {'4', '3', '0', '7', '1'};

 for (i = 0; c[i] != '\0'; i++)
   {
  int j;
  int k = 0;
  for (j = 0; let[j] != '\0'; j++)
   {
     if (c[i] == let[j])
       {
	 c[i] = num[k];
       }
     k = k + 0.5;
   }
   }
return (c);
}
