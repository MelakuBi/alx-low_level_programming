#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function to compare
 * Return: return integer
 */
	int int_index(int *array, int size, int (*cmp)(int))
{
	int ch;

	if (array && cmp && size > 0)
	{
	for (ch = 0; ch < size; ch++)
	{
	if (cmp(array[ch]))
	break;
	}
	if (ch < size)
	return (ch);
	}
	return (-1);
}

