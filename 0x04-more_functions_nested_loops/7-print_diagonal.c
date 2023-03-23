#include "main.h"
/**
 * print_diagonal - printing spaces as diagonal shape
 * @n: the argument of the function
 * return: always success
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
