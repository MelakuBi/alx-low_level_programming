#ifndef DOG_H
#define DOG_H

/**
 * struct dog- new structure
 * @name: a name
 * @age: age
 * @owner: own
 * Description: Longer Description
 */

	 struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char);


#endif
