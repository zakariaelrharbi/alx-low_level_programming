#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int size = 0;
	int size1 = 0;
	int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size])
		size++;

	while (s2[size1])
		size1++;

	ptr = malloc(sizeof(char) * (size + size1 + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = s1[i];

	for (j = i; j < size + size1; j++)
		ptr[j] = s2[j - i];

	ptr[i + j] = '\0';

	return (ptr);
}
