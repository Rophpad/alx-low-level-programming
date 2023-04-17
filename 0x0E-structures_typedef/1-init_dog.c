#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: the name of dog
 * @age: dog's age
 * @owner: Dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*d = malloc(sizeof(struct dog));*/
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
