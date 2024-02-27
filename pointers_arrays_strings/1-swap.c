#include "main.h"
#include <stdio.h>

/**
* swap_int - swap the two value of the variables
*
* @a: pointer a
*
* @b: pointer b
*/

void swap_int(int *a, int *b)
{
int p = &a;
a = &b;
b = &p;
}
