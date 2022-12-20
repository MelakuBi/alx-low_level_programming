#include "main.h"
/**
 * print_rev - this prints string in reverse
 * @s: pointer to pass string value
 */
	void print_rev(char *s)
{
	int i = 0;
	int len = 0;
/*	int j;*/

	while (s[i] != '\0')
	{
	i++;
	len++;
	}
	for (i = len - 1; i >= 0 ; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}
