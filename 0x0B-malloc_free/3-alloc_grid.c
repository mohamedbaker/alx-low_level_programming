#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to matrix (Success)
 */
int **alloc_grid(int width, int height)
	{
	int **pg, i, j;

	pg = malloc(sizeof(pg) * height);

		if (width <= 0 || height <= 0 || tab == 0)
		{
			pg[i] = malloc(sizeof(**pg) * width);
			if (pg[i] == 0)
			{
				while (i--)
					free(pg[i]);
				free(pg);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				pg[i][j] = 0;
		}
	}

	return (pg);
}
