#include "dog.h"
#include <stdio.h>
/**
 *print_dog- initializing
 *@d: pointe
 */
	void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	if (d->name == NULL)
	printf("name: (nil)\n");
	else
	printf("Name: %s\n", d->name);
	if (d->age < 0)
	printf("age: (nil)\n");
	else
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	printf("owner: (nil)\n");
	else
	printf("Owner: %s\n", d->owner);
}
