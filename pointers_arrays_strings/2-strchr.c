#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string.
* @s: string.
* @c: character.
* Return: pointer s.
*/

char *_strchr(char *s, char c)
{
unsigned int i;
 char res = '0';
for (i = 0; s[i] != '\0'; i++)
{
  if (s[i] == c)
    res = s[i];
}
 if (res != '0')
   return (res);
 else
   return ('\0');
}
