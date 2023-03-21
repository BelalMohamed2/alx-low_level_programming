#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers to 98
 * @n: the input for the function
 * Return: no value returned
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		printf("%i, ", n);
		for (count = n; count >= 98; count--)
		{
			printf("%i", count);
			printf(", ");
		}

	}
	else
	{
		for (count = n; count < 98; count++)
		{
			printf("%i", count);
			printf(", ");
		}
	}
	printf("98\n");
}
