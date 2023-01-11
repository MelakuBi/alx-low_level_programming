#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- a function allocate block of memory to array
 * @width: inner array
 * @height: outer array
 * Return: pinter
 */
	int **alloc_grid(int width, int height)
{
	int **pointer;
	int size;
	
	size = width * height;
	pointer = calloc(size, sizeof(int));
	if (size <= 0)
	return (NULL);
	else if (pointer == NULL)
	return (NULL);
	else
	return (pointer);
}
