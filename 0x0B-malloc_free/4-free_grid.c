#include "holberton.h"
#include <stdlib.h>

/**
*free_grid - frees memory occupied by 2D array
*@grid: @d array 2 b freed
*@height: height of grid
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
