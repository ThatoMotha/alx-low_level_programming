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
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));

	if (!grid)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) calloc(width, sizeof(int));

		if (!grid[i])
		{
			break;
		}
	}
	if (i != height)
	{
		for (int j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	return (grid);
}
