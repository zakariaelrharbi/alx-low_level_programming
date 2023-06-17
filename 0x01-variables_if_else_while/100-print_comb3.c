#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			b++;
		}
		if (a != '8')
		{
			putchar(',');
			putchar(' ');
		a++;
		}
	}
	return (0);
}
