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
	int *point;
	int **pointer;

	pointer = &point;
	size = width * height;
	point = (int *)malloc(size * sizeof(int) + 256 * sizeof(char));
	for (j = 0; j < height; j++)
	{
	for (k = 0; k < width; k++)
	*(point + j * width + k) = 0;
	}
	if (size <= 0)
	return (NULL);
	else if (point == NULL)
	return (NULL);
	else
	return (pointer);
}
