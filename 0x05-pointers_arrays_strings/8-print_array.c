#include "main.h"
#include <stdio.h>
/**
 *  print_array - printing number of integers from array
 *  @n: number of elemnts in the array should be printed
 *  @a: the pointer of an array of ints
 *  Return: no returned vlaues
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%i", a[i]);
		if (i >= n-1)
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
