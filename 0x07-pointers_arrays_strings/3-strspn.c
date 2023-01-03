#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * * @s: character to print
 * * @accept: character
 * * Return: i.
 */
	unsigned int _strspn(char *s, char *accept)
{
	int count = 0, count2 = 0;

	while (*s != '\0')
	{
	count++;
	s++;
	}
	while (*accept != '\0')
	{
	count2++;
	accept++;
	}
	return (count + 1);
}
