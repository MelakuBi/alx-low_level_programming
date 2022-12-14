#include <limits.h>
#include "main.h"
/**
 *print_last_digit - its important
 *@n: this accept variable value
 */
	int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
{
	n *= -1;
	_putchar(n + 0);
	_putchar('\n');
}
	return (0);
}
