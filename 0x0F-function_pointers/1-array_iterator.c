#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter on
 * each element of an integer array.
 * @array: A pointer to the first element of the array to be iterated.
 * @size: The size of the array on which the action should be performed.
 * @action: A pointer to the function to be used.
 *
 * This function takes an array, its size, and a pointer to another
 * function (which takes an integer and returns nothing). It iterates
 * through each element in the array, and for each element, it applies
 * the provided function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
