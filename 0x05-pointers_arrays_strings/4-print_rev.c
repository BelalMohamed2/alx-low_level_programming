#include "main.h"
/**
 * print_rev - function for printing a string in reverse direction
 * @s: a pointer to an array of character
 * Return: no returned value
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (1)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
