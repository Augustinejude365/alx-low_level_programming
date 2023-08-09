#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by my alloc_grid function.
 * @grid: 2 dimensional grid
 * @height: height dimension pf the grid
 * Description: frees memory of grid
 * Return: nothing
 * JA codes
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}
