#include "main.h"
/**
 * _print_rev_recursion - function that prints the string
 * character uses recursion in reverse direction
 * @s: a pointer to the input string
 * Return: void type has no return value
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);

	_putchar(*s);
}
