#include "dog.h"
/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
		}
	return (i);
}

/**
 * _create_array - creates an array of chars.
 * @size: the size of the memory to allocate.
 * Return: the array created.
 */

char *_create_array(unsigned int size)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	return (array);
}

/**
 * _strdup - duplicates a given string.
 * @str: the string to duplicate.
 * Return: the array created.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	new_str = _create_array(_strlen(str) + 1);
	if (!new_str)
		return (NULL);
	while (i <= _strlen(str))
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
/**
 * new_dog - structure with given parameters.
 * @name: Pointer to a character string indicating the name of the dog.
 * @age: Floating point value representing the age of the dog.
 * @owner: a character string indicating the name of the dog's owner.
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
