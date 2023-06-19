#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - entry point
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - entry point
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int idx, i;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d)
	{
		idx = _strlen(name);
		d->name = malloc((idx + 1) * sizeof(char));
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i <= idx; i++)
			d->name[i] = name[i];
		d->age = age;
		idx = _strlen(owner);
		d->owner = malloc((idx + 1) * sizeof(char));
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; i <= idx; i++)
			d->owner[i] = owner[i];
	}
	return (d);
}
