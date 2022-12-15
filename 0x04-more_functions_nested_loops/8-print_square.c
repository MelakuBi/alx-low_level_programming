#include "main.h"
/**
 * print_square - to print diagonally
 * @n: accept value
 */
	void print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (i = 1; i <= n; i++)
	{
	_putchar('#');
	for (j = 2; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
}
