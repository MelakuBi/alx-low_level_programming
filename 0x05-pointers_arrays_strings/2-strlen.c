#include "main.h"
/**
 * _strlen - count the length of strings
 * @s: pointer to string
 * Return: on success 0
 */
	int _strlen(char *s)
{
	string str = s;
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
	count++;
	i++;
	}
	return (count);
}
