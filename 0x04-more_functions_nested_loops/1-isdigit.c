#include "main.h"
/**
 * _isdigit - return 1 if the character is a uppercase, and 0 otherwise.
 * @c: the number to be checked
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
