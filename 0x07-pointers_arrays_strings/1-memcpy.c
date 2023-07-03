#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest:  destination that we copy the src.
 * @src:  source we want to copy.
 * @n:  number of bytes.
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
