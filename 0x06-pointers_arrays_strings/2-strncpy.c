#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source srting
 * @n: integer that specify the max num of chars to be copied.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
