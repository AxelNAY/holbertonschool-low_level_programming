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
char num[10] = {'4', '4', '3', '3', '0', '0'
, '7', '7', '1', '1'};

 for (i = 0; c[i] != '\0'; i++)
   {
     int j;
     for (j = 0; j <= 10; j++)
       {
	 if (c[i] == let[j])
	   c[i] = num[j];
       }
   }
 return (c);
}
