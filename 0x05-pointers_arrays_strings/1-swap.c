#include "main.h"
/**
 * swap_int - swap two integers.
 * @a: pointer to int
 * @b: pointer to int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
