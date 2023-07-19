#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointer to function.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
