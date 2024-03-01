#include "main.h"
#include <stdio.h>

/**
* leet - capitalizes all words of a string.
*
* @c: pointer c
*
* Return: result
*/

char *leet(char *c);
{
int i;
char let[10] = {'a', 'A', 'E', 'e', 'O', 'o'
, 'T', 't', 'L', 'l'};
char num[5] = {'4', '3', '0', '7', '1'};

 for (i = 0; c[i] != '\0'; i++)
{
  int j;
  int k;
  for (j = 0, k = 0; let[j] != '\0' || j % 2 == 0; j++, k++)
   {
     if (c[i] == let[j])
       c[i] = num[k];
   }

return (c);
}
