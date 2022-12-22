#include "main.h"
/**
 * *_strncpy - copy string from source to destination untill n
 * @dest: variable to recieve value
 * @src: variable to give value
 * @n: variable determine length to be copy
 * Return: return dest
 */
	char *_strncpy(char *dest, char *src, int n)
{
	int n;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n, i++)
	dest[i] = '\0';

	return (dest);
}
