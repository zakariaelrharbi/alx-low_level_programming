#include "main.h"
/**
 * more_numbers -prints the numbers, from 0 to 14 ten times.
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		b = 0;
		while (b <= 14)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
	}
}
