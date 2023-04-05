#include "main.h"
/**
 * _puts_recursion - function that prints the string character uses recursion
 * @s: a pointer to the input string
 * Return: void type has no return value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);

	return (_puts_recursion(s + 1));
}
