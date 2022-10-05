#include "main.h"
#include <stdlib.h>
/**
 * free_grid -frees a 20 grid creates in alloc_grid
 * @grid: ponter to pointer
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
