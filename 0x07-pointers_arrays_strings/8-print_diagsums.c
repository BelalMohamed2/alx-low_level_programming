#include "main.h"
/**
 * print_diagsums -  function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: the array of the values
 * @size: the size of each array in the array arrays
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[((size + 1) * i)];
		sum2 += a[((size - 1) + (i * (size - 1)))];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
