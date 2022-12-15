#include "main.h"
/**
 * print_square - to print diagonally
 * @n: accept value
 */
	void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	for (i = 0; i <= size; i++)
	{
	_putchar('#');
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
}
