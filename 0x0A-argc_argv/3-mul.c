#include "main.h"
#include <stdio.h>
/**
 * main -  is the entry point of the program.
 *@argc:The number of arguments
 *@argv:An array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
