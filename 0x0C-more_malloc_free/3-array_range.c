#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Creates an array of integers in order.
 *
 * @min: The minimum value for the range of numbers in the array.
 * @max: The maximum value for the range of numbers in the array.
 *
 * This function generates an array of integers, starting from
 * min and going up to max. It dynamically allocates memory for 
 * the array. If min > max, or if memory allocation fails, it 
 * returns NULL.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	j = min;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++, j++)
	{
		ptr[i] = j;
	}
	return (ptr);
}
