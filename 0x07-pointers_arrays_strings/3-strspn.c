#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: the main C string to be scanned.
 *@accept: the string containing the list of characters
 * Return: the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
		}
	return (count);
}
