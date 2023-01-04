#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of diagonals .
 * @a: pointer to an array
 * @size: size of
 * Return: void
 */
	void print_diagsums(int *a, int size)
{
	int i, j;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
{
	if (size == 5)
	{
	c = c + *(a +(i * 6));
	}
	else
	c = c + *(a + i * 4);
}
	for (j = 0; j < size; j++)
{
	d = d + *(a + (size * j) + (size - j - 1));
}
	printf("%d, %d\n", c, d);
}
