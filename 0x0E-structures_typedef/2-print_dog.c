#include <stdio.h>
#include "dog.h"

/**
 * print_dog -prints a dog
 * @d: the dog to print
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}
