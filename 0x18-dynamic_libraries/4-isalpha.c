#include "main.h"
/**
 *_isalpha - checks whether the variable is alphabet
 *@c: is character
 *Return: success 1 else 0
 */
	int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
