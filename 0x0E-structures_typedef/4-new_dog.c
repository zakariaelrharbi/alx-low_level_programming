#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str)
{
	int i;
	int size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size])
	{
		size++;
	}
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
/**
 * new_dog - structure with given parameters.
 * @d: Pointer to the 'dogt' structure to be initialized.
 * @name: Pointer to a character string indicating the name of the dog.
 * @age: Floating point value representing the age of the dog.
 * @owner: a character string indicating the name of the dog's owner.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	d->name = _strdup(name);
	d->owner = _strdup(owner);
	d->age = age;
	return (d);
}
