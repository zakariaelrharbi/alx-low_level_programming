#include "main.h"
/**
 * _strcat - concatenate two strings
 *
 * @dest: destination string
 * @src: source srting
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[a];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
