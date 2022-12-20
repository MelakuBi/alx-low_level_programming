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
	int j;

	while (s[i] != '\0')
	{
	if (s[i] >= 48 && s[i] <= 57)
	j = s[i];
	else
	j = s[i] * -1; 
	i++;
	}
	return (j);
}
