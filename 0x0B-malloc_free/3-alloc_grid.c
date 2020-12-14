#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - initilizes and return pointer to a 2 dimensional array of
 * integers
 * @width: pointers to hold pointer
 * @height: pointer being filled with 0
 * Return: Null if no memory is allocated or double pointer if space created
 * or null
 * height or width is negative or 0
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j <= i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
