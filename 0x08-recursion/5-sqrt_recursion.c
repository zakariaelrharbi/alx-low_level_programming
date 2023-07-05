#include "main.h"
/**
 * _sqrt_recursion- Calculates the natural square root of a number.
 * square_root - function that call .
 * @n: The number to calculate the natural square root of
 *
 * Return: The natural square root of the given number,
 * or -1 does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
int square_root(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (square_root(n, i + 1));
}
