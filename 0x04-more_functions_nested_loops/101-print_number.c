#include "main.h"
#include <stdio.h>
/**
 * print_numbers - to print intiger
 * @n: variable to accept number
 */
	void print_number(int n)
{
	int i;

	for (i = 0; i <= 4; i++)
{
	if (n < 0)
	_putchar(n * -1);
	else
	_putchar(n);
	_putchar('\n');
}
}
