#include "main.h"
/**
 * _strlen_recursion - function that return the length of function
 * using recursion
 * @s: a pointer to a string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
