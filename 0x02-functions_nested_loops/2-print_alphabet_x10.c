#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets
 * function a program that prints lowercase alpha letters ten times.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	a++;
	}
}
