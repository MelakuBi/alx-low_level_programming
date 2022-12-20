#include "main.h"
/**
 * _strcp - copy strings from index
 * @dest: put the value here
 * @src: recieve the value from here
 * Return: value of variables
 */
	char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	i++;
	for (j = i + 1; j >= 0; j--)
{
	dest[j] = src[]j;
}
	return (dest);
}
