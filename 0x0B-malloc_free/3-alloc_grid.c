#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * **alloc_grid - the functions returns a two dimentainal array
 * @width: this is the row of the array
 * @height: this is the height of the array
 *
 * Return: an array.
 */
int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoDarray = malloc(height * sizeof(*twoDarray));
	if (twoDarray == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		twoDarray[i] = malloc(width * sizeof(**twoDarray));
		if (twoDarray[i] == NULL)
		{
			while (i >= 0)
			{
				free(twoDarray[i]);
				i--;
			}
			free(twoDarray);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			twoDarray[i][j] = 0;
		}
	}
	return (twoDarray);
}
