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
int p1 = *a;
int p2 = *b;
*a = p1;
*b = p2;
}
