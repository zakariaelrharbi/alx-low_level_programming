#include <stdio.h>
#include "main.h"
/**
 *_isalpha - function that checks if c  alphabetic character.
 *@c: the number we want to check
 * Return: void
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
