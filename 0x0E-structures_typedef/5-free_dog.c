#include <stdlib.h>
#include "dog.h"


/**
* free_dog - frees the memory dogs
* @d: struct dog's
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);

		free(d);
	}
}
