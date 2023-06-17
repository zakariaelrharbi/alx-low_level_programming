#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
		if (x != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
