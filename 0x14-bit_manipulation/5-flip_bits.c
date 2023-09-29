#include "main.h"
/**
 * flip_bits - returns the number of bits fliped.
 * @n: number.
 * @m: number.
 * Return: c.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int f = n ^ m;

	while (f != 0)
	{
		f &= (f - 1);
		c++;
	}
	return (c);
}
