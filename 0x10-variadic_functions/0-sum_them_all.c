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
	int i, a;

	va_start(ap, n);
	if (ap == 0)
	return (0);
	for (i = n; i >= 0; i = va_arg(ap, int))
	a = a + n;
	return (a);
}
