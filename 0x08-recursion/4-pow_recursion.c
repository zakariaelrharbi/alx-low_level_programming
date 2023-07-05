#include "main.h"
/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: variable represents the base value
 * @y: variable represents the power
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	return (_pow_recursion(x, y - 1) * x);
}
