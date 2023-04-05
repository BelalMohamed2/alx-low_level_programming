#include "main.h"
/**
 * _puts_recursion - function that prints the string character uses recursion
 * @s: a pointer to the input string
 * Return: void type has no return value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
