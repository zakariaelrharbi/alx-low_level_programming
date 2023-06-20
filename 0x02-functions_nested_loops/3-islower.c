#include <stdio.h>
#include "main.h"
/**
 *_islower - function that checks if c lowercase
 *@c: the number we want to check
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
