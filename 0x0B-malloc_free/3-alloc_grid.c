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
	int **pointer;

	size = width * height;
	int *point = (int *)malloc(sizeof(int) * width * height);

	for (j = 0; j < height; j++)
	{
	point[j] = 0;
	for (k = 0; k < width; k++)
	point[k] = 0;
	}
	if (size <= 0)
	return (NULL);
	else if (point == NULL)
	return (NULL);
	else
	pointer = &point;
	return (pointer);
}
