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
	void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";
}
