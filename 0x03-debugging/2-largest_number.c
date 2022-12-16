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
	else if (b > c && c > a)
	{
	largest = b;
	}
	else if (c > a && a > b)
	{
	largest = c;
	}
	else
	largest = c;
	return (largest);
}
