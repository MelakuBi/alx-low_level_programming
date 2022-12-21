#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to intiger
 * @s: pointer to the string
 * Return: return an intiger
 */
	int _atoi(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] > 48 && s[i] <= 57)
	_putchar (s[i]);
	else if (s[i] == 45 && (s[i + 1] > 48 && s[i + 1] <= 57))
	{
	_putchar (45);
	_putchar (s[i]);
	}
	else
	_putchar ('0');
	break;
	i++;
	}

	return ('\0');
}
