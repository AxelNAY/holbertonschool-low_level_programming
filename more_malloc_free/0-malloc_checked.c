#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - returns a pointer to a 2 dimensional array of integers.
* @grid: return of the function alloc_grid.
* @height: height.
*/

void *malloc_checked(unsigned int b)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
