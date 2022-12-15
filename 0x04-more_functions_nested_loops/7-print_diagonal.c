#include "main.h"
/**
 * print_diagonal - to print diagonally
 * @n: accept value
 */
	void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (i = 1 ; i <= n; i++)
	{
	for (j = 1; j < i; j++)
	{
	_putchar('');
	}
	_putchar('\\');
	_putchar('\n');
}
}
}
