#include "main.h"
/**
 * factorial - factorial
 * @n: number
 * Return: okay
 */
	int factorial(int n)
	{
	int fac = 1;

	if (n < 0)
	return (-1);
	else if (!n)
	return (1);
	fac = factorial(n - 1);
	return (fac * n);
}
