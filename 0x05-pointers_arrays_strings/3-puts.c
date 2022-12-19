#include "main.h"
/**
 * _puts - to get new line after output
 * @str: char variable pointer
 */
	void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_puts(str[i]);
	i++;
	}
	_putchar('\n');
}
