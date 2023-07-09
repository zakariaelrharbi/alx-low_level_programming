#include "main.h"
#include <stdio.h>
/**
 * main -  is the entry point of the program.
 *@argc:The number of arguments
 *@argv:An array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	/*(void)argv;*/ /*unused parametre prob fix*/
	putchar((argc - 1) + '0');
	putchar('\n');
	return (0);
}
