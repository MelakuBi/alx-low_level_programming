#include <limits.h>
#include "main.h"
/**
 *print_last_digit - its important
 *@n: this accept variable value
 */
	int print_last_digit(int n)
{
	int no;

	no = n % 10;

	if (no < 0)
	no *= -1;

	_putchar(no + '0');

	return (no);
}
