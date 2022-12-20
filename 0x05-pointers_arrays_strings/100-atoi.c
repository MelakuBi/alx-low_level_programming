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
	{
	if (s[i] < '0')
	return (_putchar (s[i] * -1));
	else if (s[i] > '0')
	return (_putchar (s[i]));
	else
	return (_putchar ('0'));
	i++;
	}
}
