#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees a 2D grid previously crated by alloc_grid
 *@grid: 2D grid to be freed
 *@height: height of the grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
