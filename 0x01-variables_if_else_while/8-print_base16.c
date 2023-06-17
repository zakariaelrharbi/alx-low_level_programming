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
	int y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
