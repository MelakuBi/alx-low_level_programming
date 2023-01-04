#include "main.h"
/**
 * print_diagsums - prints the sums of diagonals .
 * @a: pointer to an array
 * @size: size of
 * Return: void
 */
	void print_diagsums(int *a, int size)
{
	int b = 0, c, d = 0, e = 0;

	if (b  < size)
	{
	d = d + *(a + b * sizeof(int));
	b++;
	}
	for (c = 0; c < size; c++)
	{
	e = e + *(a + (size * c) + (size - c - 1));
	}
	_putchar(c, d);
	_putchar('\n');
}
