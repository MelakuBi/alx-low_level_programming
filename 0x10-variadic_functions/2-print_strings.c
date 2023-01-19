#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_string - print string
 * @separator: sepa
 * @n: end
 */
	void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list pointer;

	va_start(pointer, n);
	for (i = 0; i < n; i++)
	{
	s = va_arg(pointer, char *);
	if (s == NULL)
	printf("(nil)");
	else
	printf("%s", s);
	if (i < n - 1 && seperator)
	printf("%s", seperator);
	}
	va_end(pointer);
	printf("\n");
}
