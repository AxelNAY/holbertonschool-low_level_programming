#include "main.h"
#include <stdio.h>

/**
* _strncmp - compares two strings.
*
* @s1: first chaine
*
* @s2: second chaine
*
* Return: ASCII value.
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
int len = 0;
while (*s1)
  {
    if (*s1 != *s2)
      return (*s2 - *s1);
    else
      return (0);
  }
}
