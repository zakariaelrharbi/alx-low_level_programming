#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - structure with given parameters.
 * @d: Pointer to the 'dog' structure to be initialized.
 * @name: Pointer to a character string indicating the name of the dog.
 * @age: Floating point value representing the age of the dog.
 * @owner: a character string indicating the name of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
