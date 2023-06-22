#include "main.h"
/**
  * print_triangle - function that prints a triangle, followed by a new line.
  * @size: int type number
  * Return: void
  */

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < size - a - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
