#include "main.h"
/**
 * _puts - to get new line after output
 * @s: char variable pointer
 */
	void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	_putchar(s[i]);
	i++;
	}
	_putchar('\n');
}
