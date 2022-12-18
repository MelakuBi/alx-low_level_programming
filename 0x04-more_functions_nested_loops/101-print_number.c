#include "main.h"
#include <stdio.h>
/**
 * print_numbers - to print intiger
 * @n: variable to accept number
 */
	void print_number(int n)
{
	int i, s;
	s = n;

	for (i = 0; i <= 4; i++)
{
	if (s < 0)
	_putchar(s * -1);
	else
	_putchar(s);
	_putchar('\n');
}
}
