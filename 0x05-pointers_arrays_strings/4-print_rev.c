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
	}
	for (; i <= 0; i--)
{
	s[i] = s[len];
	_putchar(s[i]);
	len++;
}
	_putchar('\n');
}
