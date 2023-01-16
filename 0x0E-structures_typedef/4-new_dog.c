#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog- initializing
 *@name: the dog name
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: value
 */
	 dog_t *new_dog(char *name, float age, char *owner)
{
/*	struct dog *d;*/
	(void)age;
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
