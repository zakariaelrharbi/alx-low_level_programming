#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of characters to be appended from s2.
 * Return: A pointer to the newly allocated space in memory, which contains
 * the contents of 's1', followed by the first 'n' bytes of 's2', and null
 * terminated. If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	int i, j;
	char *p1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (n >= size2)
		j = size2;
	else
		j = n;
	p1 = malloc((size1 + j + 1));
	if (p1 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p1[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && n != 0; j++)
	{
		p1[i + j] = s2[j];
		n--;
	}
	p1[i + j] = '\0';
	return (p1);
}
