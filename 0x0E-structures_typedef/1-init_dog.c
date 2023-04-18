#include "dog.h"

/**
 *init_gog - initializer
 *@d: the dog to init
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the owner's name
 *
 * return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
	{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
	}
