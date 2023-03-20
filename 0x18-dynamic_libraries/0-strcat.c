#include "main.h"
/**
 * *_strcat - concatinate strings
 * @dest: accept concatenated strings
 * @src: second string
 * Return: on success 0
 */
	char *_strcat(char *dest, char *src)
{
	int counter1 = 0, counter2 = 0;

	while (dest[counter1] != '\0')
	counter1++;

	while (src[counter2])
	{
	dest[counter1] = src[counter2];
	counter1++;
	counter2++;
	}
	return (dest);
}
