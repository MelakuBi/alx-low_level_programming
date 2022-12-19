#include "main.h"
/**
 * _strlen - count the length of strings
 * @s: pointer to string
 * Return: on success 0
 */
	int _strlen(char *s)
{
	char str;
	int count = 0;
	int i = 1;

	str = s;
	while (str != '\0')
	{
	count++;
	}
	return (count);
}
