#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *@s : point to int
 * Return: Always i.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
