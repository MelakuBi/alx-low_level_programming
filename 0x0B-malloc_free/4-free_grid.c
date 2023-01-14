#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid- a function frees a memory block alocated by alloc_grid
 * @grid: pointer to pass value
 * @height: outer array
 * Return: no return
 */
	void free_grid(int **grid, int height)
{
	int i;

	for (int i = 0; i <= height; i++)
	{
	free(grid[i]);
}
	free(grid);
}
