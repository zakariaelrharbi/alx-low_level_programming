#include "main.h"
/**
  * print_line - function that draws a straight line in the terminal.
  * @n: int type number
  * Return: void
  */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
