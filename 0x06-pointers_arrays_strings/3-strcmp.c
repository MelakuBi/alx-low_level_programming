#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: variable which holds value
 * @s2: variable to give value
 * Return: return intiger
 */
	int _strcmp(char *s1, char *s2)
{
	int i = 0, r = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	r = s1[i] - s2[i];
	break;
	}
	i++;
	}	
	return (r);
}
