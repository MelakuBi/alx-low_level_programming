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
	int ch = 0;

	if (size <= 0)
	return (-1);
	while (ch < size)
	{
	if (cmp(array[ch]) != 0)
	{
	return (ch);
	break;
	}
	ch++;
	}
/*	return (-1);*/
}

