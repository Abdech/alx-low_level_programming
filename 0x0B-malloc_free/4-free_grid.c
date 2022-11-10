#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees alloc_grid
 *
 * @grid: matrix made by pointer that points to pointer
 * @height:  array height top-down
 *
 * Return: Returns Nothing
 */
void free_grid(int **grid, int height)
{
		int  i = 0;

		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
}
