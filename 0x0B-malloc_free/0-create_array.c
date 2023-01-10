#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that allocate memory
 * @size: size of memory to be allocated
 * @c: character variable to be stored
 * Return: string value
 */
	char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	return (NULL);
	else
	{
	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);
	}
}
