#include "main.h"
#include <limits.h>
/**
 * _isdigit - it checks if imput is digit
 * @c: intiger input variable
 * Return: if variable is digit 1 else 0
 */
	int _isdigit(int c)
{
	if ((c >= INT_MIN) && (c <= INT_MAX))
	return (1);
	else
	return (0);
}
