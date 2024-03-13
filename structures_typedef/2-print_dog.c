#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: structure dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
