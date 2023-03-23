#include "main.h"
/**
 * print_line - for printing underscors according to input n
 * @n: the input of the function
 * Return: return success
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
_putchar('\n');
}
