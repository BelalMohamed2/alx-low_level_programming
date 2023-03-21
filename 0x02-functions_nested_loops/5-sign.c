#include "main.h"
/**
 * print_sign - print the sing of the input
 * @n: the input to be checked
 * Return: 1 if greater zero 0 if zero -1 if negative
 */
int print_sign(int n)
{
if (n < 0)
{
	_putchar(45);
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (0);
}
else
{
	_putchar(43);
	return (1);
}
}
