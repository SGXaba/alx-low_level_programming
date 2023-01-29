#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
	int **res = NULL;
	int i = 0, j = 0, e = 0;

	if (width > 0 && height > 0)
	{
		res = (int **)malloc(height * sizeof(int *));
		if (res != NULL)
		{
			for (i = 0; i < height && e == 0; i++)
			{
				res[i] = (int *)malloc(width * sizeof(int));
				if (res[i] != NULL)
					for (j = 0; j < height; j++)
						res[i][j] = 0;
				else
					e = 1;
			}
			if (e == 1)
			{
				for (; i >= 0; i--)
					free(res[i]);
				free(res);
			}
		}
	}
	return (res);
}
