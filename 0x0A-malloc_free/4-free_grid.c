#include "holberton.h"

/**
* free_grid - a function that frees a 2 dimensional grid previously created by
* your alloc_grid function
* @grid: pointer to a pointer to grid
* @height: height of array
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (height == 0 || grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
