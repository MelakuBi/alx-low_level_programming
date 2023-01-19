#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *sum_them_all - add all passed arguments
 *@n: first argument
 *@...: ellipse
 *Return: sum of all
 */
	int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int a = 0;

	if (n <= 0)
	return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	a += va_arg(ap, int);
	va_end(ap);
	return (a);
}
