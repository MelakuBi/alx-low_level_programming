#include "main.h"
/**
 * int _strlen_recursion - counts length of strings
 * @s: string poiner
 * Return: length of string
 */
	int _strlen_recursion(char *s)
{
	int a = 1;

	if (*s)
	{
	_strlen_recursion(s + 1);
	a++;
	}
	return (a);
}

