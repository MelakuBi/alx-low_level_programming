#include "main.h"
/**
 * int mul- multiplies numbers
 * @a: first argument
 * @b: second argument
 * Return:
 */
	int mul(int a, int b)
{
	int result;

	result = a * b;
	if ((a < 0) || (b < 0))
{
	_putchar("%i", -result);
}
	else
{
	_putchar("%d", result);
}
	return (0);
}
