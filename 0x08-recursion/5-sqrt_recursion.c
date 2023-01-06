#include "main.h"
/**
 * _sqrt_recursion(int n)
 * @n : variable
 * Return: intiger
 */
	int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	return (-1);
	else
	return (find_sqrt(i, n));
}
/**
 * find_sqrt: find sqrt and pass to the above fuction
 * @i: the perfect square to be find
 * @n: the root number;
 */
	int find_sqrt(i, n)
{
	if (n == 0 || n == 1)
	return (n);
	else if (i*i < n)
	find_sqrt(i + 1, n);
	else if (i * i == n)
	return (i);
	return (-1);
}
