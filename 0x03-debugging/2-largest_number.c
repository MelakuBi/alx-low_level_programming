#include "main.h"
/**
 *largest_number - checking largest number
 * @a: first
 * @b: second
 * @c: third
 * Return : largest number
 */
	int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
	largest = a;
	}
	else if (b > a && a > c)
	{
	largest = b;
	}
	else
	largest = c;

	return (largest);
}


