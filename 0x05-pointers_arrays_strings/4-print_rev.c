#include "main.h"
/**
 * print_rev - this prints string in reverse
 * @s: pointer to pass string value
 */
	void print_rev(char *s)
{
	char set;
	int i = 0;
	int len = 0;
/*	int j;*/

	while (s[i] != '\0')
	{
	i++;
	}
	for (; i <= 0; i--)
{

	set = s[i];
	s[i] = s[len];
	s[len] = set;
	len++;
}
	_putchar("%d", s);
	_putchar('\n');
}

