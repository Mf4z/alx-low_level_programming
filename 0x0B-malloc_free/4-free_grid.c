#include "main.h"

/**
  * free_grid - function that frees a 2 dimensional grid
  * previously created by alloc_grid function
  *
  * @grid: matrix made by double pointer
  * @height: number of rows
  *
  * Return: Returns Nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
