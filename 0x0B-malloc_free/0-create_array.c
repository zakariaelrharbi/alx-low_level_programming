#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and initializes it.
 *
 * @size: The size of the memory
 * @c: The character
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
