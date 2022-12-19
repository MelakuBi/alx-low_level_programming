#include "main.h"
/**
 * print_rev - this prints string in reverse
 * @s: pointer to pass string value
 */
	void print_rev(char *s)
{
	char rev;
	int i, len;

	len = _strlen(s);
	len = len - 1;
	while (s[i] != '\0')
	{
	s[len] = s[i];
	len--;
	i++;
	}
}

