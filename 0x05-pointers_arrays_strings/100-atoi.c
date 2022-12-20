#include "main.h"
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
	_putchar("%d", s[i]);
	i++;
	}
	return (0);
}
