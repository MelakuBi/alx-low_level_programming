#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog- initializing
 *@d: pointer
 *@name: the dog name
 *@age: age of the dog
 *@owner: owner of the dog
 */
	 dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	(void)age;
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	return (NULL);
	d->name = name;
	d->owner = owner;
	return (d);
}
