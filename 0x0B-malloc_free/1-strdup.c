#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 *
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if it fails.
 *
 * This function creates a duplicate of the string 'str'. It begins by
 * checking if 'str' is NULL. If it is, the function returns NULL.
 *
 */
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
