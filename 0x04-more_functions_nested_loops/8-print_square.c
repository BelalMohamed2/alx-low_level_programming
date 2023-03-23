#include "main.h"
/**
 * print_square - printing square of #
 * @size: the size of the square
 * return: the number of #
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i <= size-1; i++)
	{
		for (j = 0; j <= size - 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

