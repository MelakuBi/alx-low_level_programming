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
	printf("name: (nil)");
	else
	printf("Name: %s", d->name);
	if (d->age == 0)
	printf("age: (nil)");
	else
	printf("Age: %f", d->age);
	if (d->owner == NULL)
	printf("owner: (nil)");
	else
	printf("Owner: %s", d->owner);
}
