#include "main.h"
/**
 * *_strncat - concatinate strings and end at n
 * @dest: accept concatenated strings
 * @src: second string
 * Return: pass dest to main function
 */
	char *_strncat(char *dest, char *src, int n)
{
	int counter1 = 0, counter2 = 0;

	while (dest[counter1] != '\0')
	counter1++;

	while (src[counter2])
	{
	if (counter2 <= n)
	{
	dest[counter1] = src[counter2];
	counter1++;
	counter2++;
	}
	else
	break;
	}
	return (dest);
}
