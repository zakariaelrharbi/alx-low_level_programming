#include "main.h"
#include <stdio.h>
#include <stdlib.h>
 /**
 *_strdup - function that returns a pointer.
 *@size: the size of the array
 *@c:the character.
 * Return: NULL if size is 0.
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
