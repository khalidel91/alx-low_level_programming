#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - concatenate function
* @width: dim1
* @height: dim2
*
* Return: 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc((sizeof(int *)) *  height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc((sizeofint) * width);
		if (grid[i] == NULL)
		{
			for (i==; i>= 0; i--)
				free(grid[i]);
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
