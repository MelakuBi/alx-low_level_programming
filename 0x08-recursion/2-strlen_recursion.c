#include "main.h"
/**
 * int _strlen_recursion - counts length of strings
 * @s: string poiner
 * Return: length of string
 */
	int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == 0)
	{
	return (0);
	}
	_strlen_recursion(s + 1);
	return (a + 1);
}

