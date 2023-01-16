#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array of integers and intializes each element to 0
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: pointer to the 2d array
 * or NULL if width or height is less than or equal to 0
 * or if memory allocation fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (!grid)
	{
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (!grid[i])
		{
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
