#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer to the 2D grid
 * @height: number of rows in the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	/* Free each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the array of row pointers */
	free(grid);
}
