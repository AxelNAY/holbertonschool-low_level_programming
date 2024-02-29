#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares two strings.
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
while (s1[i] - s2[i] == 0 && s1[i] != '\0')
i++;
return (s1[i] - s2[i]);
}
