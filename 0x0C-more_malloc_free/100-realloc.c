#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block.
 * @ptr : void pointer to the allocated memory area .
 * @old_size : the old size of the allocated memory.
 * @new_size : the new size of reallocated memory
 * Return: void pointer.
 */
	if (new_size > old_size)
{
	free(ptr);
	ptr = (int *) malloc(new_size);
	if (ptr == NULL)
	return (NULL);
	else
	return (ptr);
}
	if (ptr == NULL)
{
	return (ptr = (int *) malloc(new_size));
	if  (ptr == NULL)
	return (NULL);
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr)
	{
	free(ptr);
	return (NULL);
	}
	return (ptr);
}