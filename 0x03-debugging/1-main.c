#include <stdio.h>
/**
* main - causes an infinite loop
* printf - function that print the result.
* Return: 0
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i);
		i++;
		printf("Infinite loop incoming :(\n");
		printf("Infinite loop avoided! \\o/\n");
	}
	return (0);
}
