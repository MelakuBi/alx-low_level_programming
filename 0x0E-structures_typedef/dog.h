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

/*void init_dog(struct dog *d, char *name, float age, char *owner);*/
typedef struct dog dog_t;
int _putchar(char);


#endif
