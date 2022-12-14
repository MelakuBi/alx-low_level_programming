#include <limits.h>
#include "main.h"
/**
 *print_last_digit - its important
 *@n: this accept variable value
 */
	int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit == INT_MIN)
	_putchar(digit);

	else if (digit > 0)
	_putchar(digit);

	else
	_putchar(digit + '0');

	return (0);
}
