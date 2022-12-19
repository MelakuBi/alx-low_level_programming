#include "main.h"
/**
 * _strlen - count the length of strings
 * @s: pointer to string
 * Return: on success 0
 */
	int _strlen(char *s)
{
	char str = *s;
	int count = 0;
	char hold[str];

	while (hold[str] != '\0')
	{
	count++;
	}
	return (count);
}
