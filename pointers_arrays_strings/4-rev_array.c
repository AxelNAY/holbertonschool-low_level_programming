#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverse a string until n
*
* @s: pointer s
*
* @n: number of time
*/

void reverse_array(int *a, int n);
{
int i = 0;
int j = 0;
char p;
for (i = n - 1; i >= n / 2; i--)
{
p = s[i];
s[i] = s[j];
s[j] = p;
j++;
}
}
