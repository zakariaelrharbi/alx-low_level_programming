#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char x = 'a';
		while (x <= 'z')
		{
			if (x != 'q' && x != 'e')
			{
			putchar(x);
			}
			x++;
		}
		putchar('\n');
	return (0);
}
