#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory and checks if it was successful
 * @b: The size of the memory to allocate
 *
 * Description: This function tries to allocate a block of memory of size 'b'.
 * If it fails to do so, it exits the program with a status value of 98.
 * If successful, it returns a pointer to the allocated memory.
 *
 * Return: Pointer to the allocated memory. If malloc fails, the program
 * is terminated with a status value.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
