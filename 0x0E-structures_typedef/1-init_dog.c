#include "dog.h"

/**
 * init_dog - entry point
 * @d: input dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
