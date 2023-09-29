#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program to check system endianness.
 *
 * Description:
 * This program determines whether the system is Little Endian or Big Endian
 * and prints the result accordingly.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
