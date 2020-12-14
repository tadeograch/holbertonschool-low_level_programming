#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees up frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 * @grid: pointers to hold pointer
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
