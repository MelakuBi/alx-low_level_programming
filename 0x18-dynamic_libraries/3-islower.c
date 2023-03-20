#include "main.h"
/**
 *_islower - compares to alphabets
 * Return: success (0)
 *@c: is the character
 */
	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
