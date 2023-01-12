#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- a function allocate block of memory to array
 * @width: inner array
 * @height: outer array
 * Return: pinter
 */
	int **alloc_grid(int width, int height)
{
	int size, j, k;
	int w = width, h = height;
	int **pointer[h][w];

	size = w * h;
	pointer = malloc(sizeof(int) * size);
	for (j = 0; j < height; j++)
	{
	pointer[j] = 0;
	for (k = 0; k < width; k++)
	pointer[k] = 0;
	}
	if (size <= 0)
	return (NULL);
	else if (pointer == NULL)
	return (NULL);
	else
	return (pointer);
}
