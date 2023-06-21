#include "main.h"
/**
 * jack_bauer - the longest day
 *
 * Return: 0
*/
void jack_bauer(void)
{
	int a, b;

	a = 0;
	while (a < 24)
	{
		b = a + 1;
		while (b < 60)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
