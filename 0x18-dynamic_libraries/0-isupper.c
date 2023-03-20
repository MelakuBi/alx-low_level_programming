#include "main.h"
/**
 * _isupper -checks letter if it is uppercase
 * @c: input
 * Return: success always 0
 */
	int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);
	else
	return (0);
}

