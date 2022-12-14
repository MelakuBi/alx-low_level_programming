#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print it
 * @n: first variable
 */
	void print_to_98(int n)
{
	if (n >= 98)
{
	do {
	printf("%d", n);
	_putchar(',');
	_putchar(' ');
	n--;
	} while (n <= 98);
	_putchar('\n');
}
	else
{
	do {
	printf("%d", n);
	_putchar(',');
	_putchar(' ');
	n++;
	} while (n <= 98);
}
}
