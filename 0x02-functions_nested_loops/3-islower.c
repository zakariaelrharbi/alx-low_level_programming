#include <stdio.h>
#include "main.h"
/**
 * int _islower - function that checks if c lowercase
 *
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
