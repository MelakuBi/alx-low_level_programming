#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: the array to be printed
 * @size: size of array
 * @action: pointer function to that returns nothing but the two functions
 * Return: void
 */
	void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
	action(array[i]);
	}
}
