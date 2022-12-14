#include <limits.h>
#include "main.h"
/**
 *print_last_digit - its important
 *@n: this accept variable value
 */
	int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (digit > 0)
{
	digit *= 1;
	_putchar('digit');
}
	else if (digit == 0)
{
	digit *= 1;
	_putchar('digit');
}
	else
{
	digit *= -1;
	_putchar('digit');
}
	return (0);
}
