#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  is the entry point of the program.
 *@argc:The number of arguments
 *@argv:An array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num, dgt, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (dgt = 0; argv[num][dgt]; dgt++)
		{
			if (argv[num][dgt] < '0' || argv[num][dgt] > '9')
			{
				printf("Error\n");
				return (1);
				}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
