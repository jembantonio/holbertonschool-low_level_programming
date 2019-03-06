#include "holberton.h"

/**
* alloc_grid - a function that returns a pointer to a 2 dimensional
* array of integers
* @width: width of 2d array
* @height: height of 2d array
*
* Return: NULL on failure or if width and height are 0
* or pointer to 2d array
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		{
			if (grid[i] == NULL)
			{
				for (i = 0; i < height; i++)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
		}
	}
	return (grid);
}
