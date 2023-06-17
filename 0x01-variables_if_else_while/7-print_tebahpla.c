#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char x = 'z';
		while (x >= 'a')
		{
			putchar(x);
			x--;
		}
		putchar('\n');
	return (0);
}
