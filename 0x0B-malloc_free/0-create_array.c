#include "main.h"
#include <stdio.h>
#include <stdlib.h>
 /**
 * create_array -  function that creates an array of chars.
 *@size: the size of the array
 *@c:the character.
 * Return: NULL if size is 0.
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
