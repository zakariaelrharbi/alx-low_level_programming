#include "main.h"
/**
 *  _strlen -  calculates the length of a string.
 * @s: pointer to a string.
 * Return: lenght.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 *  rev_string - it reverse a string.
 * @s: string parameter.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int a = 0;
	int b = _strlen(s) - 1;

	while (a < b)
	{
		char y = s[a];

		s[a] = s[b];

		s[b] = y;
		a++;
		b--;
	}
}
