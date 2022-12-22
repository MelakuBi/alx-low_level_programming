#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: variable which holds value
 * @s2: variable to give value
 * Return: return intiger
 */
	int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
	i++;

	while (s2[j] != '\0')
	j++;

	return (i - j);
}
