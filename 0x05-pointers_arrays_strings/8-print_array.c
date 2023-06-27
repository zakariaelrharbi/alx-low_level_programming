/**
  * print_array - prints n elements of an array
  * @b: the array
  * @n: the number of element to print
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", *(a + b));

		if (b != (n - 1))
			printf(", ");
		b++;
	}
	printf("\n");
}
