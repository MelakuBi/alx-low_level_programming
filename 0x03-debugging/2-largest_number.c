#include "main.h"
/**
 *largest_number - checking largest number
 * @a: first
 * @b: second
 * @c: third
 * Return: largest number
 */
	int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
	largest = a;
	}
	else if (b > a && b > c)
	{
	largest = b;
	}
	else if (c > a && c > b)
	{
	largest = c;
	}
	else
	largest = c;
	return (largest);
}
