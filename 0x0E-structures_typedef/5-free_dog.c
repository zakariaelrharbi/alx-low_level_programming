#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Function to deallocate memory occupied by a dog structure.
 *
 * This function takes a pointer to a dog_t structure as input,
 * and checks if this pointer is not NULL.
 * If the pointer is not NULL, it will free the memory
 * allocated for the name and owner of the dog, as well
 * as the structure itself.
 *
 * @d: A pointer to a dog_t structure which needs to be deallocated.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
