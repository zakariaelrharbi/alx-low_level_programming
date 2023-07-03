#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed.
 * @s:  is a pointer to the memory area that you want to fill.
 * @b:  is the constant byte value you want to fill.
 * @n:  number of bytes.
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
