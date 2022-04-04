#include "holberton.h"
#include <stdlib.h>

/**
*alloc_grid - function that returns pointer to 2D array of ints
*@width: width of 2D array
*@height: height of 2D array
*
*Return: if w <= 0 / h <= 0 of function fails NULL
*else pointer to 2D array
*/

int **alloc_grid(int width, int height)
{
int **tD;
int hgt_i, wid_i;
if (width <= 0 || height <= 0)
return (NULL);
tD = malloc(sizeof(int *) * height);
if (tD == NULL)
return (NULL);

for (hgt_i = 0; hgt_i < height; hgt_i++)
{
tD[hgt_i] = malloc(sizeof(int) * width);

if (tD[hgt_i] == NULL)
{

for (; hgt_i >= 0; hgt_i--)
free(tD[hgt_i]);

free(tD);
return (NULL);
}
}
for (hgt_i = 0; hgt_i < height; hgt_i++)
{
for (wid_i = 0; wid_i < width; wid_i++)
tD[hgt_i][wid_i] = 0;
}

return (tD);
}
