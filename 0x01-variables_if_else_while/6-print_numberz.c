#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int x = 0;
		while (x < 10)
		{
			putchar(x + 48);
			x++;
		}
		putchar('\n');
	return (0);
}
