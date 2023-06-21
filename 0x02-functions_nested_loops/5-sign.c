#include <stdio.h>
#include "main.h"
/**
 *print_sign - function that checks prints the sign of a number.
 *@n: the number we want to check
 * Return: 0,1, or -1.
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+, ", 3);
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0, ", 3);
		return (0);
	}
	else if (n < 0)
	{
		write(1, "-, ", 3);
		return (-1);
	}
}
