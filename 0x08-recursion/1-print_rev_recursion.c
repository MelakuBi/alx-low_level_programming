#include "main.h"
/**
 * _print_rev_recursion - return string with new line
 * @s: string
 * Return: nuthing
 */
	void _print_rev_recursion(char *s)
{
	if (!*s)
	return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
