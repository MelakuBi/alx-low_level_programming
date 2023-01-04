#include "main.h"
/**
 * _puts_recursion - return string with new line
 * @s: string
 * Return: nuthing
 */
	void _puts_recursion(char *s)
{
	int i, j = 0;

	if (s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	_putchar('\n');
}
