#include "main.h"
/**
 * print_alphabet - prints alphabets
 * function a program that prints lowercase alpha letters.
 * Return: void
 */
void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 28);
}
/**
 * main - Entry point
 * function a program that prints lowercase alpha letters.
 * Return: 0 Always (SUCCESS)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
