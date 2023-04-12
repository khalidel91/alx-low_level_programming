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

	grid = (int **)malloc((sizeof(int)) * width * height)

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
		grid[i][j] == 0;
		}
	}

	return (grid);
}
