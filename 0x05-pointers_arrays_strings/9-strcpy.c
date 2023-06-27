#include "main.h"

/**
  * _strcpy - copys str to another
  * @dest: destination string
  * @src: the str that we gonna copy
  *
  * Return: the pointer to dst
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	*(dest + a) = '\0';

	return (dest);
}
