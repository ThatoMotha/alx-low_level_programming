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
	int i, j, a, b;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));

		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(width * sizeof(int));

			if (!p[i])
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				p[a][b] = 0;
			}
		}
		return (p);
	}
}
