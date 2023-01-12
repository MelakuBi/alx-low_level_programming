#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function that causes normal program termination
 * @b: its variable
 * Return: anything you want
 */
	void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	exit(98);
	return (pointer);
}
