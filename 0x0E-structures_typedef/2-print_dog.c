#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog- initializing
 *@d: pointe
 */
	void print_dog(struct dog *d)
{

	if (d->name == NULL)
	printf("name: (nil)");
	if (d->age == 0)
	printf("age: (nil)");
	if (d->owner == NULL)
	printf("owner: (nil)");
}
